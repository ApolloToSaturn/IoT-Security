#include "VL53L0X.h"
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>

LOG_MODULE_REGISTER(vl53l0x, LOG_LEVEL_INF);

// Funktion, um ein einzelnes Byte in ein Register zu schreiben
static int write_reg(const struct device *i2c_dev, uint8_t reg, uint8_t value) {
    uint8_t buffer[2] = {reg, value};
    return i2c_write(i2c_dev, buffer, sizeof(buffer), VL53L0X_I2C_ADDR);
}

// Funktion, um ein einzelnes Byte aus einem Register zu lesen
static int read_reg(const struct device *i2c_dev, uint8_t reg, uint8_t *value) {
    return i2c_write_read(i2c_dev, VL53L0X_I2C_ADDR, &reg, 1, value, 1);
}

// Funktion, um ein 16-Bit-Wert aus zwei aufeinanderfolgenden Registern zu lesen
static int read_reg16(const struct device *i2c_dev, uint8_t reg, uint16_t *value) {
    uint8_t data[2];
    int ret = i2c_write_read(i2c_dev, VL53L0X_I2C_ADDR, &reg, 1, data, 2);
    if (ret == 0) {
        *value = (data[0] << 8) | data[1];
    }
    return ret;
}

bool vl53l0x_init(const struct device *i2c_dev) {
    uint8_t model_id;

    if (read_reg(i2c_dev, IDENTIFICATION_MODEL_ID, &model_id) < 0) {
        LOG_ERR("Fehler beim Lesen der Model-ID");
        return false;
    }

    if (model_id != 0xEE) {
        LOG_ERR("Ungültige Model-ID: 0x%02X", model_id);
        return false;
    }

    // Initialisierung des Sensors
    if (write_reg(i2c_dev, MSRC_CONFIG_CONTROL, 0x12) < 0) {
        LOG_ERR("Fehler beim Initialisieren des MSRC_CONFIG_CONTROL");
        return false;
    }

    LOG_INF("VL53L0X erfolgreich initialisiert");
    return true;
}

uint16_t vl53l0x_read_distance(const struct device *i2c_dev) {
    uint8_t status;
    uint16_t distance = 0;

    do {
        if (read_reg(i2c_dev, RESULT_INTERRUPT_STATUS, &status) < 0) {
            LOG_ERR("Fehler beim Lesen des Interrupt-Status");
            return 0xFFFF;
        }
    } while ((status & 0x07) == 0);

    if (read_reg16(i2c_dev, RESULT_RANGE_STATUS + 10, &distance) < 0) {
        LOG_ERR("Fehler beim Lesen der Entfernung");
        return 0xFFFF;
    }

    if (write_reg(i2c_dev, SYSTEM_INTERRUPT_CLEAR, 0x01) < 0) {
        LOG_ERR("Fehler beim Zurücksetzen des Interrupts");
    }

    LOG_INF("Gemessene Entfernung: %d mm", distance);
    return distance;
}

bool vl53l0x_set_signal_rate_limit(const struct device *i2c_dev, float limit_Mcps) {
    if (limit_Mcps < 0 || limit_Mcps > 511.99f) {
        LOG_ERR("Ungültiger Signalgrenzwert");
        return false;
    }

    uint16_t value = (uint16_t)(limit_Mcps * (1 << 7));
    if (write_reg(i2c_dev, FINAL_RANGE_CONFIG_MIN_COUNT_RATE_RTN_LIMIT, value >> 8) < 0 ||
        write_reg(i2c_dev, FINAL_RANGE_CONFIG_MIN_COUNT_RATE_RTN_LIMIT + 1, value & 0xFF) < 0) {
        LOG_ERR("Fehler beim Setzen des Signalgrenzwerts");
        return false;
    }

    return true;
}

void vl53l0x_start_continuous(const struct device *i2c_dev, uint32_t period_ms) {
    uint32_t period = period_ms * 1000;
    write_reg(i2c_dev, SYSTEM_INTERMEASUREMENT_PERIOD, (period >> 24) & 0xFF);
    write_reg(i2c_dev, SYSTEM_INTERMEASUREMENT_PERIOD + 1, (period >> 16) & 0xFF);
    write_reg(i2c_dev, SYSTEM_INTERMEASUREMENT_PERIOD + 2, (period >> 8) & 0xFF);
    write_reg(i2c_dev, SYSTEM_INTERMEASUREMENT_PERIOD + 3, period & 0xFF);
    write_reg(i2c_dev, SYSRANGE_START, 0x04);  // Start continuous mode
}

void vl53l0x_stop_continuous(const struct device *i2c_dev) {
    write_reg(i2c_dev, SYSRANGE_START, 0x01);  // Stop continuous mode
}
