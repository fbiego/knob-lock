# Knob-Lock

This is a demo project featuring a 4-digit combination lock using a 1.3" 240x240 round knob display from Viewe, with an encoder for user input. It’s designed to work with an external solenoid lock, unlocking with the correct 4-digit code.

## Demo Video

["4-Digit Lock with Knob Display and LVGL"](https://youtu.be/3N9Pu2AavAk)

## Features

- **240x240 Knob Display**: Uses a round TFT display with LVGL-powered UI.
- **Rotary Encoder**: Turn the knob to set each digit, and reverse direction to advance to the next.
- **Combination Lock**: The system verifies a 4-digit code to unlock.
  
## Hardware

**Display**: [1.28" 240x240 Round TFT Knob Display by Viewe (GC9A01, ESP32-C3 based)](https://viewedisplay.com/product/esp32-1-28-inch-240x240-round-tft-knob-display-gc9a01-arduino-lvgl/)

## Setup Instructions

1. **Upload Code**:
   - Disconnect the USB from the computer.
   - Push down on the display screen and reconnect the USB.
   - This will enable download mode for flashing.
   - After successful flashing, reconnect the board.

2. **Operation**:
   - Push down on the display to enter the unlock code.
   - Turn the knob to set each digit in the lock code.
   - Change direction to move to the next digit.
   - Once all four digits are entered, the code is checked against the unlock code.
  

## Future Enhancements

- Add support for customizable lock codes
  
  
