#include <zephyr/logging/log.h>
#include "ssd1315.h"
#include "hbrslogo.h"

LOG_MODULE_REGISTER(draw, LOG_LEVEL_INF);

void draw_chess_pattern(SSD1315_Object_t *obj) {
    LOG_INF("Chess Pattern");
    SSD1315_Clear(obj, SSD1315_COLOR_BLACK);
    for (uint32_t y = 0; y < 64; y += 8) {
        for (uint32_t x = 0; x < 128; x += 8) {
            SSD1315_FillRect(obj, x, y, 8, 8, (x + y) % 16 == 0 ? SSD1315_COLOR_WHITE : SSD1315_COLOR_BLACK);
        }
    }
    SSD1315_Refresh(obj);
}

void draw_random_pattern(SSD1315_Object_t *obj) {
    LOG_INF("Random Pattern");
    SSD1315_Clear(obj, SSD1315_COLOR_BLACK);
    for (uint32_t y = 0; y < SSD1315_LCD_PIXEL_HEIGHT; y++) {
        for (uint32_t x = 0; x < SSD1315_LCD_PIXEL_WIDTH; x++) {
            SSD1315_SetPixel(obj, x, y, (x + y) % 4 ? SSD1315_COLOR_WHITE : SSD1315_COLOR_BLACK);
        }
    }
    SSD1315_Refresh(obj);
}

void draw_hbrs_logo(SSD1315_Object_t *obj) {
    LOG_INF("HBRS Logo");
    SSD1315_Clear(obj, SSD1315_COLOR_BLACK);
    SSD1315_DrawBitmap(obj, 0, 0, hbrslogo_bits);
    SSD1315_Refresh(obj);
}
