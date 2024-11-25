#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>

#include "ssd1315.h"

#include "i2c_scanner.h"
#include "hbrs_logo_bitmap.h"



LOG_MODULE_REGISTER(ssd1315_display, LOG_LEVEL_INF);

const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2));

int32_t I2C_Init(void) {
    if (!device_is_ready(i2c_dev)) {
        LOG_ERR("I2C device not ready");
        return -1; // Fehler, wenn das Gerät nicht bereit ist
    }
    return 0; // Erfolg
}

int32_t I2C_DeInit(void) {
    // Zephyr benötigt normalerweise keine De-Initialisierung
    return 0;
}

int32_t I2C_WriteReg(uint16_t reg, uint8_t *data, uint16_t length) {
    uint8_t buffer[length + 1];
    buffer[0] = (uint8_t)reg;
    memcpy(&buffer[1], data, length);

    int ret = i2c_write(i2c_dev, buffer, length + 1, 0x3C);
    if (ret != 0) {
        LOG_ERR("I2C write failed: %d", ret);
        return -1;
    }
    return 0;
}


int32_t I2C_ReadReg(uint16_t reg, uint8_t *data, uint16_t length) {
    // Schreibe die Registeradresse, von der gelesen werden soll
    if (i2c_write(i2c_dev, (uint8_t *)&reg, 1, 0x3C) != 0) { // 0x3C ist die I2C-Adresse
        return -1; // Fehler
    }

    // Lese die Daten vom Register
    if (i2c_read(i2c_dev, data, length, 0x3C) != 0) {
        return -1; // Fehler
    }

    return 0; // Erfolg
}

// SSD1315-Objekt und IO-Struktur
SSD1315_Object_t ssd1315_obj;
SSD1315_IO_t ssd1315_io = {
    .Init = I2C_Init,
    .DeInit = I2C_DeInit,
    .WriteReg = I2C_WriteReg,
    .ReadReg = I2C_ReadReg,
    .GetTick = (int32_t (*)(void))k_uptime_get_32 // Zephyr-Zeitfunktion
};


int main(void) {
    LOG_INF("Starting SSD1315 application");
    i2c_scan();

    // Registriere das I/O-Interface
    if (SSD1315_RegisterBusIO(&ssd1315_obj, &ssd1315_io) != SSD1315_OK) {
        LOG_ERR("Failed to register SSD1315 IO");
        return -1;
    }

    // Initialisiere das Display
    if (SSD1315_Init(&ssd1315_obj, SSD1315_FORMAT_DEFAULT, SSD1315_ORIENTATION_LANDSCAPE) != SSD1315_OK) {
        LOG_ERR("Failed to initialize SSD1315");
        return -1;
    }

    LOG_INF("SSD1315 initialized successfully");

    SSD1315_Clear(&ssd1315_obj, SSD1315_COLOR_BLACK);
    SSD1315_DisplayOn(&ssd1315_obj);

    // Schachbrettmuster
    for (uint32_t y = 0; y < 64; y += 8) {
        for (uint32_t x = 0; x < 128; x += 8) {
            SSD1315_FillRect(&ssd1315_obj, x, y, 8, 8, (x + y) % 16 == 0 ? SSD1315_COLOR_WHITE : SSD1315_COLOR_BLACK);
        }
    }
    SSD1315_Refresh(&ssd1315_obj);
    k_sleep(K_SECONDS(3));

    // Bildschirm löschen und Logo zeichnen
    SSD1315_Clear(&ssd1315_obj, SSD1315_COLOR_BLACK);
    SSD1315_DrawBitmap(&ssd1315_obj, 0, 0, hbrs_logo_bitmap);
    SSD1315_Refresh(&ssd1315_obj);

    while (1) {
        k_sleep(K_SECONDS(1));
    }

    return 0;
}