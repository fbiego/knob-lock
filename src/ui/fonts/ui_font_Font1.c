/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font C:/Users/Lenovo/SquareLine/assets/Montserrat-Black.ttf -o C:/Users/Lenovo/SquareLine/assets\ui_font_Font1.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "../ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0x66, 0xff, 0x60,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0023 "#" */
    0x19, 0xc7, 0x3b, 0xff, 0xff, 0xff, 0xfe, 0x77,
    0x3f, 0xff, 0xff, 0xff, 0xee, 0x71, 0xcc, 0x0,

    /* U+0024 "$" */
    0xc, 0x3, 0x7, 0xfb, 0xfe, 0xf0, 0x3e, 0xf,
    0xf9, 0xff, 0xf, 0xd0, 0xff, 0xff, 0xfe, 0x7f,
    0x3, 0x0,

    /* U+0025 "%" */
    0x78, 0x73, 0xf3, 0x8c, 0xde, 0x33, 0x70, 0xff,
    0x81, 0xff, 0xe0, 0x7f, 0xc3, 0xb3, 0x1e, 0xcc,
    0x73, 0x33, 0x87, 0x80,

    /* U+0026 "&" */
    0x1f, 0x3, 0xf8, 0x7f, 0x87, 0xb8, 0x3f, 0x3,
    0xe6, 0x77, 0xef, 0x3e, 0xff, 0xf7, 0xfe, 0x3e,
    0x40,

    /* U+0027 "'" */
    0xff, 0xfe,

    /* U+0028 "(" */
    0x3d, 0xe7, 0x9e, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf,
    0x1e, 0x79, 0xe3, 0xc0,

    /* U+0029 ")" */
    0xf1, 0xe7, 0x9e, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,
    0xde, 0x79, 0xef, 0x0,

    /* U+002A "*" */
    0x18, 0x7e, 0xff, 0x3c, 0xff, 0x7e, 0x18,

    /* U+002B "+" */
    0x1c, 0x1c, 0x1c, 0xff, 0xff, 0xff, 0x1c, 0x1c,

    /* U+002C "," */
    0x6f, 0xf7, 0x6e,

    /* U+002D "-" */
    0xff, 0xfe,

    /* U+002E "." */
    0x6f, 0xf6,

    /* U+002F "/" */
    0x7, 0x83, 0x81, 0xc1, 0xe0, 0xe0, 0x70, 0x78,
    0x38, 0x1c, 0x1e, 0xe, 0x7, 0x7, 0x3, 0x81,
    0xc0,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xe7, 0xfb, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0x7f, 0x9f, 0xe1, 0xe0,

    /* U+0031 "1" */
    0xff, 0xff, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,
    0xc0,

    /* U+0032 "2" */
    0x1f, 0x1f, 0xef, 0xfc, 0xcf, 0x3, 0xc1, 0xe0,
    0xf0, 0xf8, 0x7f, 0xdf, 0xf7, 0xfc,

    /* U+0033 "3" */
    0x7f, 0x9f, 0xe7, 0xf8, 0x3c, 0x1e, 0x7, 0xe1,
    0xfc, 0xf, 0x7f, 0xdf, 0xe3, 0xf0,

    /* U+0034 "4" */
    0x7, 0x81, 0xe0, 0x78, 0x1e, 0x3, 0xfc, 0xf7,
    0xbf, 0xff, 0xff, 0xff, 0xe0, 0x78, 0xf, 0x0,

    /* U+0035 "5" */
    0x3f, 0x9f, 0xe7, 0xf9, 0xfc, 0x7f, 0x9f, 0xf0,
    0x3d, 0xf, 0x7f, 0xff, 0xe7, 0xf0,

    /* U+0036 "6" */
    0x1f, 0x8f, 0xe7, 0xfb, 0xfc, 0xff, 0xbf, 0xff,
    0x3f, 0xcf, 0x7f, 0xdf, 0xe1, 0xf0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xfb, 0x9e, 0xef, 0x83, 0xc0,
    0xf0, 0x78, 0x1e, 0xf, 0x3, 0xc0,

    /* U+0038 "8" */
    0x3f, 0x3f, 0xff, 0xff, 0xff, 0x7f, 0xbf, 0xff,
    0x3f, 0xcf, 0xff, 0xdf, 0xe3, 0xf0,

    /* U+0039 "9" */
    0x3e, 0x1f, 0xef, 0xfb, 0xcf, 0xff, 0xdf, 0xf3,
    0xfc, 0x1f, 0x7f, 0x9f, 0xc7, 0xe0,

    /* U+003A ":" */
    0x6f, 0xf6, 0x6, 0xff, 0x60,

    /* U+003B ";" */
    0x6f, 0xf6, 0x6, 0xff, 0x76, 0xe0,

    /* U+003C "<" */
    0x3, 0xf, 0x7f, 0xfc, 0xf0, 0xfe, 0x3f, 0x7,
    0x1,

    /* U+003D "=" */
    0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff,

    /* U+003E ">" */
    0xc0, 0xf0, 0xfe, 0x3f, 0xf, 0x7f, 0xfc, 0xe0,
    0x80,

    /* U+003F "?" */
    0x3e, 0x3f, 0xff, 0xe4, 0xf0, 0xf0, 0x70, 0x0,
    0x18, 0x1e, 0xf, 0x3, 0x0,

    /* U+0040 "@" */
    0x7, 0xe0, 0x1f, 0xf8, 0x3b, 0xfc, 0x77, 0xf6,
    0xef, 0xf3, 0xce, 0x73, 0xce, 0x73, 0xce, 0x73,
    0xcf, 0xff, 0xe7, 0xbe, 0x63, 0xbc, 0x38, 0x0,
    0x1f, 0xf0, 0x7, 0xe0,

    /* U+0041 "A" */
    0xf, 0x80, 0x7c, 0x7, 0xe0, 0x3f, 0x81, 0xdc,
    0x1e, 0xf0, 0xff, 0x8f, 0xfe, 0x7f, 0xf7, 0x83,
    0xfc, 0x1e,

    /* U+0042 "B" */
    0xff, 0x9f, 0xff, 0xff, 0xf8, 0xff, 0xfd, 0xff,
    0xbf, 0xff, 0x8f, 0xff, 0xff, 0xff, 0xfe, 0x0,

    /* U+0043 "C" */
    0xf, 0x87, 0xfd, 0xff, 0xfc, 0x6f, 0x1, 0xe0,
    0x3c, 0x7, 0xc6, 0x7f, 0xe7, 0xfc, 0x3e, 0x0,

    /* U+0044 "D" */
    0xff, 0x8f, 0xfc, 0xff, 0xef, 0x1f, 0xf0, 0xff,
    0xf, 0xf0, 0xff, 0x1f, 0xff, 0xef, 0xfc, 0xff,
    0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xff, 0xc0, 0xff, 0xbf, 0xef,
    0xfb, 0xc0, 0xff, 0xff, 0xff, 0xfc,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xfe, 0xf, 0xff, 0xff, 0xff,
    0xe0, 0xf0, 0x78, 0x3c, 0x0,

    /* U+0047 "G" */
    0x1f, 0x87, 0xfd, 0xff, 0xfc, 0x4f, 0x1, 0xe3,
    0xfc, 0x7f, 0xcf, 0x7f, 0xe7, 0xfc, 0x7e, 0x0,

    /* U+0048 "H" */
    0xf1, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0xff, 0xff,
    0xff, 0xff, 0x8f, 0xf1, 0xfe, 0x3f, 0xc7, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0x7f, 0xbf, 0xdf, 0xe0, 0xf0, 0x78, 0x3c, 0x1e,
    0x8f, 0x7f, 0xff, 0x9f, 0x80,

    /* U+004B "K" */
    0xf1, 0xef, 0x3c, 0xf7, 0x8f, 0xf8, 0xff, 0xf,
    0xf0, 0xff, 0x8f, 0xf8, 0xf3, 0xcf, 0x3e, 0xf1,
    0xf0,

    /* U+004C "L" */
    0xf0, 0x78, 0x3c, 0x1e, 0xf, 0x7, 0x83, 0xc1,
    0xe0, 0xff, 0xff, 0xff, 0xe0,

    /* U+004D "M" */
    0xf0, 0x3f, 0xc0, 0xff, 0x87, 0xff, 0x3f, 0xfc,
    0xff, 0xff, 0xff, 0xff, 0xfd, 0xef, 0xf7, 0xbf,
    0xcc, 0xff, 0x3, 0xc0,

    /* U+004E "N" */
    0xf1, 0xfe, 0x3f, 0xe7, 0xfe, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xbf, 0xf3, 0xfe, 0x3f, 0xc7, 0x80,

    /* U+004F "O" */
    0xf, 0x81, 0xff, 0x1f, 0xfd, 0xf1, 0xff, 0x7,
    0xf8, 0x3f, 0xc1, 0xff, 0x1f, 0x7f, 0xf1, 0xff,
    0x3, 0xe0,

    /* U+0050 "P" */
    0xff, 0x9f, 0xfb, 0xff, 0xf8, 0xff, 0x1f, 0xff,
    0xff, 0xf7, 0xfc, 0xf0, 0x1e, 0x3, 0xc0, 0x0,

    /* U+0051 "Q" */
    0xf, 0x80, 0xff, 0x87, 0xff, 0x3e, 0x3e, 0xf0,
    0x7b, 0xc1, 0xef, 0x7, 0xbe, 0x3e, 0x7f, 0xf1,
    0xff, 0x81, 0xf8, 0x1, 0xfe, 0x3, 0xfc, 0x3,
    0xc0,

    /* U+0052 "R" */
    0xff, 0x9f, 0xfb, 0xff, 0xf8, 0xff, 0x1f, 0xff,
    0xff, 0xf7, 0xfc, 0xf7, 0xde, 0x7b, 0xc7, 0x80,

    /* U+0053 "S" */
    0x3f, 0x1f, 0xef, 0xfb, 0xc2, 0xfc, 0x1f, 0xe0,
    0xfd, 0xf, 0xff, 0xff, 0xe7, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xfc, 0x78, 0x1e, 0x7, 0x81,
    0xe0, 0x78, 0x1e, 0x7, 0x81, 0xe0,

    /* U+0055 "U" */
    0xf1, 0xfe, 0x3f, 0xc7, 0xf8, 0xff, 0x1f, 0xe3,
    0xfc, 0x7f, 0x8f, 0x7f, 0xcf, 0xf8, 0x7c, 0x0,

    /* U+0056 "V" */
    0xf0, 0x7f, 0x83, 0x9e, 0x3c, 0xf1, 0xc3, 0xde,
    0x1e, 0xf0, 0xff, 0x3, 0xf8, 0x1f, 0x80, 0x7c,
    0x3, 0xc0,

    /* U+0057 "W" */
    0xf0, 0xf1, 0xef, 0x1e, 0x3d, 0xe7, 0xc7, 0x3c,
    0xfd, 0xe3, 0x9f, 0xbc, 0x7f, 0xf7, 0xf, 0xef,
    0xe0, 0xfd, 0xfc, 0x1f, 0x9f, 0x3, 0xe3, 0xe0,
    0x3c, 0x7c, 0x0,

    /* U+0058 "X" */
    0xf8, 0xf7, 0x9e, 0x3f, 0xc1, 0xfc, 0x1f, 0x80,
    0xf0, 0x1f, 0x83, 0xfc, 0x3f, 0xe7, 0x9e, 0xf8,
    0xf0,

    /* U+0059 "Y" */
    0xf0, 0xf7, 0x8e, 0x79, 0xe3, 0xfc, 0x3f, 0xc1,
    0xf8, 0xf, 0x0, 0xf0, 0xf, 0x0, 0xf0, 0xf,
    0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xfc, 0x1e, 0xf, 0x7, 0x83,
    0xc1, 0xe0, 0xff, 0xff, 0xff, 0xfc,

    /* U+005B "[" */
    0xff, 0xff, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf,
    0x3c, 0xff, 0xff, 0xc0,

    /* U+005C "\\" */
    0xf0, 0x38, 0x1c, 0xf, 0x3, 0x81, 0xc0, 0xf0,
    0x38, 0x1c, 0x7, 0x3, 0x81, 0xc0, 0x70, 0x38,
    0x1e,

    /* U+005D "]" */
    0xff, 0xff, 0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,
    0xcf, 0xff, 0xff, 0xc0,

    /* U+005E "^" */
    0x3c, 0x3c, 0x7c, 0x7e, 0x66, 0xe7, 0xe7,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xf3, 0x86,

    /* U+0061 "a" */
    0x3e, 0x3f, 0x9f, 0xe0, 0xf7, 0xff, 0xff, 0xdf,
    0xff, 0x77, 0x80,

    /* U+0062 "b" */
    0xf0, 0x3c, 0xf, 0x3, 0xfc, 0xff, 0xbf, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xff, 0xfb, 0xfc,

    /* U+0063 "c" */
    0x1f, 0x1f, 0xef, 0xff, 0xc4, 0xf0, 0x3c, 0x4f,
    0xfd, 0xfe, 0x1f, 0x0,

    /* U+0064 "d" */
    0x3, 0xc0, 0xf0, 0x3c, 0xff, 0x7f, 0xff, 0xff,
    0x3f, 0xcf, 0xf3, 0xff, 0xf7, 0xfc, 0xff,

    /* U+0065 "e" */
    0x1f, 0x1f, 0xef, 0xff, 0xff, 0xff, 0xfc, 0x4f,
    0xf9, 0xfe, 0x1f, 0x0,

    /* U+0066 "f" */
    0x1f, 0x7e, 0x7e, 0xfe, 0xfe, 0xfe, 0x78, 0x78,
    0x78, 0x78, 0x78, 0x78,

    /* U+0067 "g" */
    0x3f, 0xdf, 0xff, 0xff, 0xcf, 0xf3, 0xff, 0xf7,
    0xfc, 0xef, 0x3, 0xdf, 0xf7, 0xf8, 0xf8,

    /* U+0068 "h" */
    0xf0, 0x3c, 0xf, 0x3, 0xdc, 0xff, 0xbf, 0xff,
    0x3f, 0xcf, 0xf3, 0xfc, 0xff, 0x3f, 0xcf,

    /* U+0069 "i" */
    0xff, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0x3c, 0xf3, 0xc0, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3,
    0xcf, 0x3d, 0xff, 0xbc,

    /* U+006B "k" */
    0xf0, 0x1e, 0x3, 0xc0, 0x79, 0xef, 0x79, 0xfe,
    0x3f, 0xc7, 0xf8, 0xff, 0x1e, 0xf3, 0xcf, 0x79,
    0xf0,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+006D "m" */
    0xff, 0x3c, 0xff, 0xfe, 0xff, 0xff, 0xf3, 0xcf,
    0xf3, 0xcf, 0xf3, 0xcf, 0xf3, 0xcf, 0xf3, 0xcf,
    0xf3, 0xcf,

    /* U+006E "n" */
    0xff, 0x3f, 0xef, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0x3f, 0xcf, 0xf3, 0xc0,

    /* U+006F "o" */
    0x1e, 0x1f, 0xef, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0xfd, 0xfe, 0x1e, 0x0,

    /* U+0070 "p" */
    0xff, 0x3f, 0xef, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0xff, 0xfe, 0xff, 0x3c, 0xf, 0x3, 0xc0,

    /* U+0071 "q" */
    0x3f, 0xdf, 0xff, 0xff, 0xcf, 0xf3, 0xfc, 0xff,
    0xfd, 0xff, 0x3f, 0xc0, 0xf0, 0x3c, 0xf,

    /* U+0072 "r" */
    0xff, 0xff, 0xff, 0x8f, 0x1e, 0x3c, 0x78, 0xf0,

    /* U+0073 "s" */
    0x3e, 0x7f, 0xbf, 0xde, 0x7, 0xe0, 0x3b, 0xfd,
    0xfe, 0x7e, 0x0,

    /* U+0074 "t" */
    0x78, 0x78, 0xfe, 0xfe, 0xfe, 0x78, 0x78, 0x78,
    0x7e, 0x3e, 0x1f,

    /* U+0075 "u" */
    0xf3, 0xfc, 0xff, 0x3f, 0xcf, 0xf3, 0xfc, 0xff,
    0xfd, 0xff, 0x3f, 0xc0,

    /* U+0076 "v" */
    0xf1, 0xde, 0x39, 0xcf, 0x3d, 0xc3, 0xf8, 0x7e,
    0xf, 0xc0, 0xf8, 0x1e, 0x0,

    /* U+0077 "w" */
    0xe3, 0xcf, 0xf3, 0xce, 0x73, 0xce, 0x77, 0xfe,
    0x7f, 0xfc, 0x3f, 0xfc, 0x3e, 0xfc, 0x3e, 0x78,
    0x1e, 0x78,

    /* U+0078 "x" */
    0xf3, 0xde, 0xe3, 0xf8, 0xfc, 0x1e, 0xf, 0xc3,
    0xf9, 0xfe, 0xf3, 0xc0,

    /* U+0079 "y" */
    0xf1, 0xde, 0x39, 0xcf, 0x3d, 0xc3, 0xf8, 0x7e,
    0x7, 0xc0, 0xf8, 0x1e, 0xf, 0xc3, 0xf0, 0x3c,
    0x0,

    /* U+007A "z" */
    0xff, 0xff, 0xff, 0x1e, 0x3c, 0x78, 0xff, 0xff,
    0xff,

    /* U+007B "{" */
    0x3d, 0xf7, 0xde, 0x79, 0xef, 0xbc, 0xf9, 0xe7,
    0x9e, 0x7d, 0xf3, 0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf1, 0xfb, 0xf1, 0xe3, 0xc7, 0x8f, 0x8f, 0x3e,
    0x78, 0xf1, 0xef, 0xdf, 0xbc, 0x0,

    /* U+007E "~" */
    0x73, 0x7f, 0xbf, 0xd9, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 77, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 80, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 125, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 12, .adv_w = 189, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 28, .adv_w = 168, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 46, .adv_w = 235, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 199, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 83, .adv_w = 65, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 85, .adv_w = 98, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 97, .adv_w = 98, .box_w = 6, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 109, .adv_w = 121, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 116, .adv_w = 159, .box_w = 8, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 124, .adv_w = 78, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 127, .adv_w = 100, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 129, .adv_w = 78, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 113, .box_w = 9, .box_h = 15, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 148, .adv_w = 177, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 107, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 156, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 185, .adv_w = 157, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 199, .adv_w = 182, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 158, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 229, .adv_w = 169, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 243, .adv_w = 165, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 174, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 271, .adv_w = 169, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 285, .adv_w = 78, .box_w = 4, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 78, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 296, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 305, .adv_w = 159, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 312, .adv_w = 159, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 1},
    {.bitmap_index = 321, .adv_w = 155, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 265, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 362, .adv_w = 206, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 380, .adv_w = 198, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 396, .adv_w = 190, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 412, .adv_w = 211, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 172, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 443, .adv_w = 165, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 456, .adv_w = 197, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 472, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 90, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 147, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 196, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 524, .adv_w = 158, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 537, .adv_w = 244, .box_w = 14, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 557, .adv_w = 206, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 217, .box_w = 13, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 591, .adv_w = 190, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 217, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 632, .adv_w = 191, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 168, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 662, .adv_w = 167, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 676, .adv_w = 201, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 201, .box_w = 13, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 710, .adv_w = 309, .box_w = 19, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 737, .adv_w = 195, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 182, .box_w = 12, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 771, .adv_w = 176, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 785, .adv_w = 105, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 797, .adv_w = 113, .box_w = 9, .box_h = 15, .ofs_x = -1, .ofs_y = -2},
    {.bitmap_index = 814, .adv_w = 105, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 826, .adv_w = 159, .box_w = 8, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 833, .adv_w = 128, .box_w = 8, .box_h = 2, .ofs_x = 0, .ofs_y = -2},
    {.bitmap_index = 835, .adv_w = 154, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 837, .adv_w = 164, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 848, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 863, .adv_w = 157, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 875, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 167, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 902, .adv_w = 109, .box_w = 8, .box_h = 12, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 914, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 929, .adv_w = 180, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 944, .adv_w = 83, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 951, .adv_w = 86, .box_w = 6, .box_h = 16, .ofs_x = -1, .ofs_y = -3},
    {.bitmap_index = 963, .adv_w = 183, .box_w = 11, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 980, .adv_w = 83, .box_w = 4, .box_h = 12, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 266, .box_w = 16, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1004, .adv_w = 180, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1016, .adv_w = 174, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1028, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1043, .adv_w = 179, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1058, .adv_w = 117, .box_w = 7, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1066, .adv_w = 145, .box_w = 9, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1077, .adv_w = 118, .box_w = 8, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1088, .adv_w = 179, .box_w = 10, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1100, .adv_w = 165, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 250, .box_w = 16, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1131, .adv_w = 165, .box_w = 10, .box_h = 9, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1143, .adv_w = 165, .box_w = 11, .box_h = 12, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1160, .adv_w = 146, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1169, .adv_w = 112, .box_w = 6, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1181, .adv_w = 82, .box_w = 4, .box_h = 15, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1189, .adv_w = 112, .box_w = 7, .box_h = 15, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 1203, .adv_w = 159, .box_w = 9, .box_h = 4, .ofs_x = 1, .ofs_y = 4}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 6, 7, 8, 9, 10, 9, 10,
    11, 12, 0, 13, 14, 15, 16, 17,
    18, 19, 12, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 25, 22, 26, 27,
    28, 0, 0, 29, 30, 31, 0, 0,
    22, 32, 33, 34, 3, 35, 29, 36,
    36, 37, 38, 39, 40, 41, 0, 0,
    42, 0, 43, 44, 45, 46, 47, 48,
    49, 43, 50, 50, 51, 46, 43, 43,
    44, 44, 52, 53, 54, 55, 49, 56,
    56, 57, 56, 58, 40, 0, 0, 9
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 0, 1, 2, 0, 3, 4, 5,
    2, 0, 6, 7, 8, 9, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 11,
    17, 18, 19, 20, 20, 0, 0, 0,
    21, 22, 23, 24, 22, 24, 24, 24,
    22, 24, 24, 25, 24, 24, 24, 24,
    22, 24, 22, 24, 3, 26, 27, 28,
    28, 29, 30, 31, 0, 32, 33, 0,
    34, 0, 35, 0, 36, 36, 36, 0,
    36, 0, 37, 38, 0, 0, 39, 39,
    36, 39, 36, 39, 40, 41, 42, 43,
    43, 44, 43, 45, 0, 0, 33, 8
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 3, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, 12, 0,
    5, -3, 0, 0, 0, -14, -15, 0,
    10, 3, 3, -10, 0, 8, 0, 8,
    3, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 5, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    -5, 3, 5, 0, 0, -3, 0, 0,
    3, 0, -3, 0, -3, -1, -5, 0,
    0, 0, 0, -3, 0, 0, -3, -4,
    0, -3, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, -3, -3, 0, 0,
    -5, 0, -33, 0, -5, 0, 5, 8,
    0, 0, -5, 3, 3, 8, 5, -3,
    5, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -4, -8, 0, -10,
    0, 0, 0, 0, -3, 5, 0, -8,
    -5, -3, 3, 0, -3, 0, 0, -3,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 3, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    13, 5, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 5, 3, 8, -3,
    0, 5, -3, -10, -32, 0, 5, 5,
    -1, -3, 0, 3, 0, 5, 0, 5,
    0, -26, 0, -4, 8, 0, 8, -3,
    5, 3, 0, 3, -3, 0, -3, 20,
    0, 20, 0, 8, 0, 8, 5, 3,
    0, 0, 0, -8, 0, 0, 0, 3,
    -3, 0, 0, -6, -5, -5, 0, 0,
    -3, 0, 0, 0, -10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -17,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 3, -14, 0,
    -18, 0, 0, 0, -3, 0, 20, -4,
    -5, 3, 3, 3, 0, -5, 3, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -23, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, -8, 10,
    0, -19, -23, -20, -5, 8, 0, 0,
    -15, 0, 0, -8, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, -28, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -5, 0, -3, -3, -3, 0, 0, 0,
    0, 0, 0, -5, 0, -4, 0, -8,
    -5, 0, -6, -10, -10, -3, -5, 0,
    -5, 0, 0, 0, -2, 0, 0, 3,
    0, 0, -3, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 3, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 3, 0, 5, 0, 0, -4,
    0, -5, 0, 0, 0, 8, 0, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, -1, -1, 0,
    -3, -1, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -3, -3, -3, 0,
    0, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -3, -5, 0, 0, -8,
    0, -8, 5, 0, -5, 3, 5, 5,
    0, -6, 0, 0, 0, 0, -9, 3,
    0, 3, -15, 3, 0, 0, 3, -14,
    0, -15, -4, -23, 0, -13, 0, 5,
    6, 5, 0, 0, 0, 0, 1, 0,
    -8, -5, 0, 0, 0, 0, -3, 0,
    0, -3, 0, 0, 0, 0, 0, -1,
    -1, 0, -1, -3, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, -3, -4,
    -1, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -4, -4, 0,
    0, 0, 0, -5, 3, 0, 0, 1,
    3, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 1, 0, -2, 0, 0,
    0, 0, -5, -4, 0, 0, 8, 0,
    3, -5, 0, 5, -13, -12, -9, -5,
    3, 0, -1, -17, -4, 0, -4, 0,
    -5, 4, -4, -14, 0, -5, 0, 0,
    1, 0, 4, 0, 3, 5, -8, -9,
    -13, -4, -6, -4, -8, 0, -5, 3,
    0, -4, 0, 0, 0, -3, 0, 0,
    0, 0, 3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    -1, 0, 0, -3, 0, -5, -6, -6,
    0, -8, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, -1, -4, 0, 0,
    3, 0, 0, 0, 0, 0, 0, 0,
    15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    3, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, -8, 0, 0,
    0, -4, -13, 0, 0, -3, 3, 0,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, -5, -5, 0, -3, -3, -4, 0,
    0, 0, 0, 0, 0, -8, 0, -3,
    0, -4, -3, 0, -6, -6, -8, -1,
    -5, 5, -8, 0, 0, 0, 20, 0,
    0, 1, 0, 0, -5, 0, 0, -10,
    0, 0, 0, 0, -26, -8, 8, 8,
    -4, -12, 0, 3, -4, 0, -13, -1,
    -3, 3, -18, -3, 9, 0, 4, -9,
    -4, -10, -10, -12, 0, -15, 0, 13,
    0, -1, 0, 0, 0, -1, -1, -3,
    -8, -10, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -3, 0, -1, -3,
    -4, 0, -5, 0, -3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, -5, 0, 5, -3,
    3, 0, -4, 3, 0, 0, 0, -3,
    0, -3, -3, -3, 0, -4, -3, 0,
    0, -1, -3, 0, -3, 0, 0, -3,
    0, 3, 0, -4, 0, 0, 0, -5,
    0, -3, 0, -3, -3, 0, 0, 0,
    0, 0, 0, 0, -5, 3, 0, -1,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -3, -1, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 5, 10, 0, 0, -4, 0,
    5, 0, -3, -9, -3, 4, 3, 0,
    -9, -3, 3, -3, 3, 0, 4, -1,
    -6, 0, -4, 1, 0, 0, -3, 0,
    0, 3, 3, -5, -3, -3, -3, -4,
    -3, -3, 0, -3, 1, -3, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -1, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, -3, 0, 0,
    -3, -3, 0, 0, 0, -3, 0, 0,
    0, -1, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, -5, 0, 0,
    -10, 0, 0, -6, 5, 1, 0, -10,
    0, 0, -6, -3, 0, -10, -6, -9,
    0, 0, -14, -3, -10, -12, -14, 0,
    0, 5, 15, -3, -5, -3, 0, -3,
    -3, -5, -4, -10, -13, -8, 0, 0,
    0, 0, 3, 0, -18, 3, 8, 3,
    -3, -8, 0, 3, 0, 0, -13, 0,
    -3, 5, -20, -3, 3, 0, 0, -17,
    -1, -12, -3, -18, 0, -18, 0, 10,
    3, 0, 0, 0, 0, 0, -1, 0,
    -9, 0, 0, 0, 0, 0, 0, -6,
    0, 0, -3, -6, -10, 0, 0, -1,
    -4, -8, -3, 0, -3, 0, 0, 0,
    0, -12, -3, -8, -6, -5, -5, -6,
    -3, -3, -5, 0, -10, -4, -3, 0,
    -3, 0, 0, 1, 0, 0, -8, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -5, 15, 0, -3, -3, -4, 0, 0,
    0, 0, 0, 0, -8, 0, -3, 0,
    -4, -3, 0, -6, -6, -8, -1, -5,
    5, 10, 0, 0, 0, 20, 0, 0,
    1, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, -1, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, -1, 0, 0, 0, -3, -3, 0,
    0, -5, -3, 0, -5, 0, 3, -1,
    0, 0, 0, 0, 0, 1, 0, 0,
    0, 0, 5, 5, 0, 0, -5, 0,
    8, -10, -9, -5, -5, 10, 8, 3,
    -20, -3, 5, -3, 0, -3, 8, -3,
    -9, 0, -3, 3, -3, -5, -8, -5,
    0, 8, 5, 0, -6, -14, -3, 15,
    -3, -9, 3, -3, -8, -8, -3, 3,
    0, -4, 0, -5, 5, 8, -8, -10,
    -10, -6, 8, 0, 3, -20, -4, 3,
    -5, -3, -8, 0, -6, -10, -4, -4,
    -5, 0, 0, -8, -8, -3, 8, 8,
    -3, -14, -14, 1, 0, -9, -17, -3,
    -9, -5, -8, -9, 0, 0, -3, 0,
    -5, 0, -3, -6, 0, 3, -10, 3,
    0, 0, -15, 0, -3, -6, -5, -3,
    -8, -6, -10, -5, 0, -8, -3, -8,
    0, -8, -3, 0, 3, 10, -5, -8,
    -3, 0, -3, -5, -8, -8, -10, -13,
    -5, 5, 0, -4, 0, -13, 4, 5,
    -9, -10, -5, -10, 10, -3, 1, -26,
    -6, 5, -6, -5, -10, 0, -8, -12,
    0, -3, -5, -3, -8, -8, -3, 0,
    8, 10, 0, -17, -15, 1, 13, -9,
    -19, -5, -9, -12, -13, -10, 0, 0,
    0, 0, 0, 0, 3, 0, 5, 0,
    -3, 5, 0, 0, 0, 0, 0, 0,
    0, 3, 3, -1, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 5, 8,
    1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, 5, 0, 0, 0,
    5, 0, 0, 0, 13, 0, 8, 3,
    3, -5, 0, 5, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 8, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, -3, 3, 8, 0, 0,
    20, 0, -5, -5, 3, 3, 0, 3,
    -13, 0, 0, 15, -15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -20,
    13, 36, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 3, 0, 0, 3, 28, -5,
    -1, 5, 5, -5, 3, 0, 0, 3,
    3, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -33, 10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    -5, 0, 0, 0, 0, -4, -1, 0,
    0, 0, -4, 0, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, -3, 0, 0, 0,
    -4, 0, -5, 0, 0, -3, 3, 0,
    0, 0, -5, -3, -5, 0, 0, -5,
    0, -3, 0, -10, 0, -8, 0, 0,
    -12, 0, -10, -8, -12, 0, -15, 0,
    -5, -4, 0, 0, 0, 0, 0, 0,
    0, -4, -4, -1, 0, 0, 0, 0,
    -3, -6, 5, -8, 5, 0, 0, -5,
    0, -3, 0, 0, 0, -1, 0, 3,
    -5, -3, 0, 0, 0, -13, -5, -10,
    0, -15, 0, -10, 0, 0, 0, -1,
    0, 0, 0, 0, 3, 0, -3, -3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 18, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, -5, 3, 0, 0,
    0, -5, -3, -5, 0, 0, -6, 0,
    -3, 0, -10, 0, 0, 0, 0, -23,
    0, -5, -10, -13, 0, -15, 0, -3,
    -4, 0, 0, 0, 0, 0, 0, 0,
    -3, -4, -1, 3, 0, 0, 3, -5,
    13, 8, -3, -3, -8, 0, 8, 3,
    3, -5, 0, 8, 0, 5, 3, 5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 15, 10, -8, -3, -1, 20,
    13, 20, 0, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 10, 0, 0, 0,
    0, -10, 0, -5, -6, -8, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, -10, 0,
    -5, -6, -8, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, -8, 3, 0, -3, 5, 8, 3,
    -8, 0, 3, -4, 3, 0, 5, 0,
    0, 0, 0, 3, 0, 0, 0, -5,
    0, -10, 0, 13, -3, -6, 0, 0,
    0, -5, 0, -3, -9, -5, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0,
    -10, 0, -5, -6, -8, 0, -15, 0,
    0, 0, 0, 0, 13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 8, -3, -3, -10, 3, 5,
    3, 0, -4, 1, 6, 1, 5, 3,
    5, -4, -13, 0, 0, 0, 0, -5,
    -9, -8, 0, -5, 0, -5, -1, -1,
    0, 0, 0, 0, 4, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -3, -3, 0,
    0, -5, 0, -1, 0, -3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, -3, 0, 0, 0,
    0, 0, -1, 0, -3, -3, 3, 0,
    -3, -3, 0, 0, -3, 0, -3, -3,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, 0, 5,
    0, -4, 0, 0, 0, 0, -3, 0,
    -3, 0, 0, 0, 0, 0, 0, -8,
    0, 8, -5, -8, -10, 0, 8, 8,
    3, -10, 0, 4, 0, 8, 0, 10,
    0, -8, 0, 0, 3, 0, 0, -8,
    -5, 0, -5, 0, -5, -5, -4, 0,
    -4, 0, -3, 4, 0, -5, -8, -3,
    0, 0, 0, 0, -5, 0, 5, -8,
    0, 3, -3, 5, 5, 0, -10, 0,
    0, -3, 0, -3, 8, -5, 0, 0,
    0, 0, 0, -6, 0, -8, 0, -10,
    0, 8, -3, -4, 0, 13, 0, -3,
    0, -3, -8, 0, -3, 0, 0, 0,
    0, 0, 0, 3, -3, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 3, 0,
    -1, 0, 0, 0, 0, 1, 0, -3,
    -3, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 58,
    .right_class_cnt     = 45,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 16,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT1*/

