//========== LIBRARY
#include <Wire.h>
#include <Adafruit_SSD1306.h>
#include <Adafruit_GFX.h>
//========== OLED SETTING
#define OLED_WIDTH 128
#define OLED_HEIGHT 64

#define OLED_ADDR   0x3C

#define FRAME_DELAY (42)
#define FRAME_WIDTH (48)
#define FRAME_HEIGHT (48)
#define FRAME_COUNT (sizeof(sounds) / sizeof(sounds[0]))

Adafruit_SSD1306 display(OLED_WIDTH, OLED_HEIGHT);
//========== GIF ARRAY
const byte PROGMEM sounds[][288] = {
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 2, 8, 0, 0, 16, 64, 3, 8, 32, 4, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 32, 4, 16, 192, 2, 8, 0, 0, 16, 64, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 64, 0, 8, 96, 0, 16, 192, 2, 8, 96, 0, 16, 192, 3, 8, 96, 4, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 4, 16, 192, 2, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 0, 0, 16, 64, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 2, 8, 96, 0, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 2, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 0, 0, 16, 192, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 32, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 3, 8, 96, 4, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 32, 0, 16, 192, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 195, 195, 8, 97, 132, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 132, 16, 195, 0, 8, 96, 0, 16, 195, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 0, 96, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 8, 96, 0, 0, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 0, 8, 96, 0, 16, 195, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 8, 96, 0, 0, 192, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 194, 8, 97, 128, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 194, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 0, 8, 96, 0, 16, 193, 0, 8, 96, 0, 16, 192, 0, 8, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 32, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 8, 96, 0, 0, 192, 0, 8, 96, 0, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 194, 8, 97, 132, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 194, 8, 97, 132, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 0, 8, 96, 0, 16, 195, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 64, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 195, 192, 0, 97, 128, 0, 195, 192, 8, 97, 128, 0, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 0, 0, 96, 0, 0, 195, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 8, 97, 128, 0, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 16, 195, 192, 8, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 0, 0, 96, 0, 0, 195, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 96, 0, 0, 192, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 192, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 8, 97, 128, 16, 195, 194, 8, 97, 132, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 194, 8, 97, 132, 16, 195, 192, 8, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 128, 0, 96, 0, 0, 195, 0, 0, 96, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 192, 0, 97, 128, 0, 67, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 194, 0, 97, 132, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 67, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 97, 128, 0, 3, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 33, 128, 0, 3, 192, 0, 97, 128, 0, 67, 192, 0, 97, 128, 0, 195, 194, 0, 97, 132, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 194, 0, 97, 132, 0, 195, 192, 0, 97, 128, 0, 195, 192, 0, 97, 128, 0, 67, 192, 0, 33, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 194, 0, 97, 132, 0, 67, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 192, 0, 97, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 194, 0, 1, 134, 0, 3, 195, 0, 33, 134, 0, 3, 195, 0, 97, 134, 0, 67, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 67, 195, 0, 33, 134, 0, 3, 194, 0, 1, 132, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 33, 134, 0, 3, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 0, 97, 134, 0, 195, 195, 0, 97, 134, 0, 195, 195, 0, 33, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 1, 128, 0, 3, 194, 0, 1, 132, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 97, 134, 0, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 0, 97, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 194, 0, 1, 132, 0, 3, 192, 0, 1, 128, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 6, 0, 0, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 8, 1, 134, 16, 3, 195, 8, 97, 134, 16, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 67, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 3, 0, 0, 6, 0, 1, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 4, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 33, 134, 16, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 33, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 0, 1, 134, 0, 3, 195, 0, 1, 134, 0, 3, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 8, 0, 6, 16, 0, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 33, 134, 16, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 33, 134, 16, 67, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 3, 8, 0, 6, 16, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 1, 134, 16, 67, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 2, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 67, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 1, 134, 16, 3, 195, 8, 1, 134, 16, 3, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 3, 0, 0, 6, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 6, 0, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 195, 8, 33, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 33, 134, 16, 195, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 3, 8, 0, 4, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 32, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 0, 6, 16, 192, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 4, 16, 0, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 3, 8, 0, 0, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 64, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 0, 6, 16, 64, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
  {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 2, 8, 0, 0, 16, 0, 3, 8, 0, 6, 16, 0, 3, 8, 0, 6, 16, 64, 3, 8, 32, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 195, 8, 97, 134, 16, 195, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 96, 6, 16, 192, 3, 8, 32, 6, 16, 192, 3, 8, 0, 6, 16, 64, 3, 8, 0, 6, 16, 0, 2, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 8, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
int frame = 0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  display.begin(SSD1306_SWITCHCAPVCC, OLED_ADDR);

}

void loop() {
  // put your main code here, to run repeatedly:
  display.clearDisplay();
  
  //===== DISPLAY TEXT 
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0, 0);
  display.println("Playing");
  //===== MUSIC GIF
  display.drawBitmap(0, 20, sounds[frame], FRAME_WIDTH, FRAME_HEIGHT, 1);
  display.display();
  frame = (frame + 1) % FRAME_COUNT;
  delay(FRAME_DELAY);
}