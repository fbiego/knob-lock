/*
   MIT License

  Copyright (c) 2024 Felix Biego

  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.

  ______________  _____
  ___  __/___  /_ ___(_)_____ _______ _______
  __  /_  __  __ \__  / _  _ \__  __ `/_  __ \
  _  __/  _  /_/ /_  /  /  __/_  /_/ / / /_/ /
  /_/     /_.___/ /_/   \___/ _\__, /  \____/
                              /____/

*/

#define LGFX_USE_V1
#include "Arduino.h"
#include <LovyanGFX.hpp>
#include <ChronosESP32.h>
#include <Timber.h>
#include <Wire.h>
#include "main.h"
#include <Encoder.h>
#include <lvgl.h>
#include "Button2.h"
#include <Preferences.h>

#ifdef USE_UI
#include "ui/ui.h"
#endif

class LGFX : public lgfx::LGFX_Device
{

  lgfx::Panel_GC9A01 _panel_instance;
  lgfx::Light_PWM _light_instance;
  lgfx::Bus_SPI _bus_instance;

public:
  LGFX(void)
  {
    {
      auto cfg = _bus_instance.config();

      // SPIバスの設定
      cfg.spi_host = SPI; // 使用するSPIを選択  ESP32-S2,C3 : SPI2_HOST or SPI3_HOST / ESP32 : VSPI_HOST or HSPI_HOST
      // ※ ESP-IDFバージョンアップに伴い、VSPI_HOST , HSPI_HOSTの記述は非推奨になるため、エラーが出る場合は代わりにSPI2_HOST , SPI3_HOSTを使用してください。
      cfg.spi_mode = 0;                  // SPI通信モードを設定 (0 ~ 3)
      cfg.freq_write = 80000000;         // 传输时的SPI时钟（最高80MHz，四舍五入为80MHz除以整数得到的值）
      cfg.freq_read = 20000000;          // 接收时的SPI时钟
      cfg.spi_3wire = true;              // 受信をMOSIピンで行う場合はtrueを設定
      cfg.use_lock = true;               // 使用事务锁时设置为 true
      cfg.dma_channel = SPI_DMA_CH_AUTO; // 使用するDMAチャンネルを設定 (0=DMA不使用 / 1=1ch / 2=ch / SPI_DMA_CH_AUTO=自動設定)
      // ※ ESP-IDFバージョンアップに伴い、DMAチャンネルはSPI_DMA_CH_AUTO(自動設定)が推奨になりました。1ch,2chの指定は非推奨になります。
      cfg.pin_sclk = SCLK; // SPIのSCLKピン番号を設定
      cfg.pin_mosi = MOSI; // SPIのCLKピン番号を設定
      cfg.pin_miso = MISO; // SPIのMISOピン番号を設定 (-1 = disable)
      cfg.pin_dc = DC;     // SPIのD/Cピン番号を設定  (-1 = disable)

      _bus_instance.config(cfg);              // 設定値をバスに反映します。
      _panel_instance.setBus(&_bus_instance); // バスをパネルにセットします。
    }

    {                                      // 表示パネル制御の設定を行います。
      auto cfg = _panel_instance.config(); // 表示パネル設定用の構造体を取得します。

      cfg.pin_cs = CS;   // CSが接続されているピン番号   (-1 = disable)
      cfg.pin_rst = RST; // RSTが接続されているピン番号  (-1 = disable)
      cfg.pin_busy = -1; // BUSYが接続されているピン番号 (-1 = disable)

      // ※ 以下の設定値はパネル毎に一般的な初期値が設定さ BUSYが接続されているピン番号 (-1 = disable)れていますので、不明な項目はコメントアウトして試してみてください。

      cfg.memory_width = WIDTH;   // ドライバICがサポートしている最大の幅
      cfg.memory_height = HEIGHT; // ドライバICがサポートしている最大の高さ
      cfg.panel_width = WIDTH;    // 実際に表示可能な幅
      cfg.panel_height = HEIGHT;  // 実際に表示可能な高さ
      cfg.offset_x = OFFSET_X;    // パネルのX方向オフセット量
      cfg.offset_y = OFFSET_Y;    // パネルのY方向オフセット量
      cfg.offset_rotation = 0;    // 值在旋转方向的偏移0~7（4~7是倒置的）
      cfg.dummy_read_pixel = 8;   // 在读取像素之前读取的虚拟位数
      cfg.dummy_read_bits = 1;    // 读取像素以外的数据之前的虚拟读取位数
      cfg.readable = false;       // 如果可以读取数据，则设置为 true
      cfg.invert = true;          // 如果面板的明暗反转，则设置为 true
      cfg.rgb_order = RGB_ORDER;  // 如果面板的红色和蓝色被交换，则设置为 true
      cfg.dlen_16bit = false;     // 对于以 16 位单位发送数据长度的面板，设置为 true
      cfg.bus_shared = false;     // 如果总线与 SD 卡共享，则设置为 true（使用 drawJpgFile 等执行总线控制）

      _panel_instance.config(cfg);
    }

    {                                      // Set backlight control. (delete if not necessary)
      auto cfg = _light_instance.config(); // Get the structure for backlight configuration.

      cfg.pin_bl = BL;     // pin number to which the backlight is connected
      cfg.invert = false;  // true to invert backlight brightness
      cfg.freq = 44100;    // backlight PWM frequency
      cfg.pwm_channel = 1; // PWM channel number to use

      _light_instance.config(cfg);
      _panel_instance.setLight(&_light_instance); // Sets the backlight to the panel.
    }
    setPanel(&_panel_instance); // 使用するパネルをセットします。
  }
};

LGFX tft;
Encoder myEnc(ENCA, ENCB);
Button2 button;
Preferences prefs;

static const uint32_t screenWidth = WIDTH;
static const uint32_t screenHeight = HEIGHT;

const unsigned int lvBufferSize = screenWidth * 10;
uint8_t lvBuffer[2][lvBufferSize];
static lv_display_t *lvDisplay;

lv_obj_t *label1;

ChronosTimer activity; // monitor inactivity

int code[4] = {8, 4, 1, 3}; // unlock code ()
int current[4];
bool state = true, set;
int pos;
int rotary;
int prevRotary;
bool direction;

void locked();
void lock();
void unlock();

/* Display flushing */
void my_disp_flush(lv_display_t *display, const lv_area_t *area, unsigned char *data)
{

  uint32_t w = lv_area_get_width(area);
  uint32_t h = lv_area_get_height(area);
  lv_draw_sw_rgb565_swap(data, w * h);

  if (tft.getStartCount() == 0)
  {
    tft.endWrite();
  }
  tft.pushImageDMA(area->x1, area->y1, area->x2 - area->x1 + 1, area->y2 - area->y1 + 1, (uint16_t *)data);
  lv_display_flush_ready(display); /* tell lvgl that flushing is done */
}

void buttonHandler(Button2 &btn)
{

  if (btn.getType() == long_click)
  {
    //
  }
  else
  {

    state = !state;
    if (state)
    {
      lock();
    }
    else
    {
      unlock();
      pos = 0;
    }
  }

  activity.time = millis();
  activity.active = true;
}

static uint32_t my_tick(void)
{
  return millis();
}

void locked()
{
  lv_label_set_text(ui_digit1, "L");
  lv_label_set_text(ui_digit2, "O");
  lv_label_set_text(ui_digit3, "C");
  lv_label_set_text(ui_digit4, "K");
  lv_obj_remove_flag(ui_lockPanel, LV_OBJ_FLAG_HIDDEN);
  lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_image_recolor(ui_lockIcon, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_obj_set_y(ui_lockPanel, 180);
  lv_obj_add_flag(ui_progressArc, LV_OBJ_FLAG_HIDDEN);

  lv_image_set_src(ui_lockIcon, &ui_img_lock_png);
  lv_obj_set_width(ui_lockIcon, 128);
  lv_obj_set_height(ui_lockIcon, 128);
  lv_obj_remove_flag(ui_lockIcon, LV_OBJ_FLAG_HIDDEN);

  lv_label_set_text(ui_infoText, "Press to\nstart unlock");
}

void lock()
{
  moveDown_Animation(ui_lockPanel, 0);
  maximize_Animation(ui_lockIcon, 0);

  lv_image_set_src(ui_lockIcon, &ui_img_lock_png);
  lv_label_set_text(ui_infoText, "Press to\nstart unlock");
}

void unlock()
{
  moveUp_Animation(ui_lockPanel, 0);
  minimize_Animation(ui_lockIcon, 0);

  lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
  lv_obj_set_style_image_recolor(ui_lockIcon, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);

  lv_image_set_src(ui_lockIcon, &ui_img_lock_png);
  lv_label_set_text(ui_infoText, "Enter code");
}

void setup()
{
  Serial.begin(115200); /* prepare for possible serial debug */

  Serial.println("Starting up device");

  tft.init();
  tft.initDMA();
  tft.startWrite();
  tft.fillScreen(TFT_BLACK);
  pinMode(SOLENOID, OUTPUT);
  digitalWrite(SOLENOID, LOW);

  button.begin(SW);
  button.setLongClickTime(3000);
  button.setClickHandler(buttonHandler);
  // button.setLongClickHandler(buttonHandler);
  button.setLongClickDetectedHandler(buttonHandler);
  // button.setDoubleClickHandler(buttonHandler);
  // button.setTripleClickHandler(buttonHandler);

  prefs.begin("my-app");

  // prefs.getBytes("code", code, 4);
  // prefs.putBytes("code", code, 4);

  lv_init();

  lv_tick_set_cb(my_tick);

  lvDisplay = lv_display_create(screenWidth, screenHeight);
  lv_display_set_color_format(lvDisplay, LV_COLOR_FORMAT_RGB565);
  lv_display_set_flush_cb(lvDisplay, my_disp_flush);

  lv_display_set_buffers(lvDisplay, lvBuffer[0], lvBuffer[1], lvBufferSize, LV_DISPLAY_RENDER_MODE_PARTIAL);

#ifdef USE_UI
  ui_init();
#else
  label1 = lv_label_create(lv_scr_act());
  lv_label_set_long_mode(label1, LV_LABEL_LONG_WRAP);
  lv_obj_set_align(label1, LV_ALIGN_CENTER);
  lv_obj_set_width(label1, screenWidth - 50);
  lv_label_set_text(label1, "Hello there!");

#endif
  locked(); // initial state

  tft.setBrightness(200);

  // activity.duration = 10000;

  rotary = myEnc.read() / 2;
  prevRotary = rotary;
}

void loop()
{

  lv_timer_handler(); // Update the UI-
  button.loop();
  delay(5);

  rotary = myEnc.read() / 2; // reduce resolution

  if (prevRotary != rotary && !state)
  {
    // encoder has changed

    activity.time = millis();
    activity.active = true;
    if (pos == 0)
    {
      // when pos is zero, wait for next change, increment pos
      direction = rotary > prevRotary; // check direction
      pos++;
      lv_label_set_text(ui_digit1, "");
      lv_label_set_text(ui_digit2, "");
      lv_label_set_text(ui_digit3, "");
      lv_label_set_text(ui_digit4, "");
    }
    else
    {
      if (direction != rotary > prevRotary)
      {
        // direction has changed, increment pos
        direction = rotary > prevRotary;
        pos++;
        // myEnc.write(0);
        if (pos > 4)
        {
          // we have entered all 4 digits
          int i;
          // check if code is correct
          for (i = 0; i < 4; i++)
          {
            if (current[i] != code[i])
            {
              break;
            }
          }
          if (i == 4)
          {
            
            // unlock
            digitalWrite(SOLENOID, HIGH);
            lv_label_set_text(ui_digit1, "O");
            lv_label_set_text(ui_digit2, "P");
            lv_label_set_text(ui_digit3, "E");
            lv_label_set_text(ui_digit4, "N");
            lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0x00BB38), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0x00BB38), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0x00BB38), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0x00BB38), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_image_set_src(ui_lockIcon, &ui_img_unlock_png);
            lv_obj_set_style_image_recolor(ui_lockIcon, lv_color_hex(0x00BB38), LV_PART_MAIN | LV_STATE_DEFAULT);
            moveDown_Animation(ui_lockPanel, 0);
            maximize_Animation(ui_lockIcon, 0);
            lv_label_set_text(ui_infoText, "Unlocked");
          }
          else
          {
            // Wrong code
            digitalWrite(SOLENOID, LOW);
            lv_label_set_text(ui_digit1, "L");
            lv_label_set_text(ui_digit2, "O");
            lv_label_set_text(ui_digit3, "C");
            lv_label_set_text(ui_digit4, "K");
            lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0xD80000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0xD80000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0xD80000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0xD80000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_obj_set_style_image_recolor(ui_lockIcon, lv_color_hex(0xD80000), LV_PART_MAIN | LV_STATE_DEFAULT);
            lv_image_set_src(ui_lockIcon, &ui_img_lock_png);
            moveDown_Animation(ui_lockPanel, 0);
            maximize_Animation(ui_lockIcon, 0);
            lv_label_set_text(ui_infoText, "Wrong Code");

          }
          pos = 0;
          state = true;
        }
      }
    }
    prevRotary = rotary;

    if (rotary < 0)
    {
      // flip negative numbers
      rotary *= -1;
    }

    rotary %= 10; // constraint 0-9

    if (prevRotary < 0)
    {
      rotary = (10 - rotary) % 10; // offset for negative numbers, ensures circular numbers direction doesn't reverse order in negative side
    }

    // switch between the current active digit using pos
    switch (pos)
    {
    case 1:
      lv_label_set_text_fmt(ui_digit1, "%d", rotary);
      lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0x00A8FF), LV_PART_MAIN | LV_STATE_DEFAULT);
      current[0] = rotary; // store the current digit
      break;
    case 2:
      lv_label_set_text(ui_digit1, "*");
      lv_label_set_text_fmt(ui_digit2, "%d", rotary);
      lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0x00A8FF), LV_PART_MAIN | LV_STATE_DEFAULT);
      current[1] = rotary;
      break;
    case 3:
      lv_label_set_text(ui_digit1, "*");
      lv_label_set_text(ui_digit2, "*");
      lv_label_set_text_fmt(ui_digit3, "%d", rotary);
      lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0x00A8FF), LV_PART_MAIN | LV_STATE_DEFAULT);
      current[2] = rotary;
      break;
    case 4:
      lv_label_set_text(ui_digit1, "*");
      lv_label_set_text(ui_digit2, "*");
      lv_label_set_text(ui_digit3, "*");
      lv_label_set_text_fmt(ui_digit4, "%d", rotary);
      lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0x00A8FF), LV_PART_MAIN | LV_STATE_DEFAULT);
      current[3] = rotary;
      break;
    }
  }

  if (activity.active)
  {
    if (activity.time + activity.duration < millis())
    {
      activity.active = false;

      // inactivity

      lv_image_set_src(ui_lockIcon, &ui_img_lock_png);
      lv_label_set_text(ui_infoText, "Press to\nstart unlock");

      lv_obj_set_style_border_color(ui_digit1, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_obj_set_style_border_color(ui_digit2, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_obj_set_style_border_color(ui_digit3, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_obj_set_style_border_color(ui_digit4, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);
      lv_obj_set_style_image_recolor(ui_lockIcon, lv_color_hex(0xE6F4B8), LV_PART_MAIN | LV_STATE_DEFAULT);

      if (lv_image_get_scale(ui_lockIcon) != 256)
      {
        lock();
      }

      state = true;
      digitalWrite(SOLENOID, LOW);
    }
  }
}