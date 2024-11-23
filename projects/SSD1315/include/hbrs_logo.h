#ifndef SSD1315_LOGO_H
#define SSD1315_LOGO_H

#include "ssd1315.h"

// Logo-Daten (z. B. 16x16 Pixel, anpassen nach Bedarf)
static const uint8_t hbrs_logo_map[] = {
    0x00, 0x3C, 0x7E, 0xE7, 0xC3, 0xC3, 0xE7, 0x7E,
    0x3C, 0x00, 0x00, 0x00, 0x18, 0x3C, 0x7E, 0xFF,
    0xFF, 0x7E, 0x3C, 0x18, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00
};

// Funktion zum Zeichnen des Logos
static inline void SSD1315_DrawLogo(SSD1315_Object_t *pObj, uint8_t x, uint8_t y, uint8_t color) {
    uint8_t width = 16;  // Breite des Logos
    uint8_t height = 16; // Höhe des Logos

    for (uint8_t row = 0; row < height; row++) {
        uint8_t line = hbrs_logo_map[row];
        for (uint8_t col = 0; col < width; col++) {
            if (line & (1 << (width - 1 - col))) { // Prüfe Pixel in der Bitmap
                SSD1315_SetPixel(pObj, x + col, y + row, color);
            } else {
                SSD1315_SetPixel(pObj, x + col, y + row, !color);
            }
        }
    }
}

#endif // SSD1315_LOGO_H
