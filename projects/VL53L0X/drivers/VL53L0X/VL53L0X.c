#include "vl53l0x.h"
#include <zephyr/zephyr.h>
#include <zephyr/device.h>
#include <zephyr/drivers/i2c.h>
#include <zephyr/logging/log.h>

LOG_MODULE_REGISTER(vl53l0x, LOG_LEVEL_INF);

static int vl53l0x_write_byte(const struct device *i2c_dev, uint8_t reg, uint8_t value) {
    uint8_t buffer[2] = {reg, value};
    return i2c_write(i2c_dev, buffer, sizeof(buffer), VL53L0X_I2C_ADDR);
}

static int vl53l0x_read_byte(const struct device *i2c_dev, uint8_t reg, uint8_t *value) {
    return i2c_write_read(i2c_dev, VL53L0X_I2C_ADDR, &reg, 1, value, 1);
}

static int vl53l0x_read_word(const struct device *i2c_dev, uint8_t reg, uint16_t *value) {
    uint8_t data[2];
    int ret = i2c_write_read(i2c_dev, VL53L0X_I2C_ADDR, &reg, 1, data, 2);
    if (ret == 0) {
        *value = (data[0] << 8) | data[1];
    }
    return ret;
}

bool vl53l0x_init(const struct device *i2c_dev) {
    uint8_t model_id;

    // Prüfe Model-ID
    if (vl53l0x_read_byte(i2c_dev, IDENTIFICATION_MODEL_ID, &model_id) < 0) {
        LOG_ERR("Fehler beim Lesen der Model-ID");
        return false;
    }

    if (model_id != 0xEE) {
        LOG_ERR("Ungültige Model-ID: 0x%02X", model_id);
        return false;
    }

    // Initialisierung
    if (vl53l0x_write_byte(i2c_dev, SYSRANGE_START, 0x01) < 0) {
        LOG_ERR("Fehler beim Starten des Sensors");
        return false;
    }

    LOG_INF("VL53L0X erfolgreich initialisiert");
    return true;
}

uint16_t vl53l0x_read_distance(const struct device *i2c_dev) {
    uint16_t distance;

    // Warte auf Messung
    uint8_t status;
    do {
        if (vl53l0x_read_byte(i2c_dev, RESULT_INTERRUPT_STATUS, &status) < 0) {
            LOG_ERR("Fehler beim Lesen des Status");
            return 0xFFFF;
        }
    } while ((status & 0x07) == 0);

    // Lese Entfernung
    if (vl53l0x_read_word(i2c_dev, RESULT_RANGE_STATUS + 10, &distance) < 0) {
        LOG_ERR("Fehler beim Lesen der Entfernung");
        return 0xFFFF;
    }

    // Interrupt zurücksetzen
    if (vl53l0x_write_byte(i2c_dev, SYSTEM_INTERRUPT_CLEAR, 0x01) < 0) {
        LOG_ERR("Fehler beim Zurücksetzen des Interrupts");
    }

    LOG_DBG("Gemessene Entfernung: %d mm", distance);
    return distance;
}
