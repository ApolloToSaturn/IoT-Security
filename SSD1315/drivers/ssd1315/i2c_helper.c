// i2c_helper.c
#include "i2c_helper.h"
#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/logging/log.h>
#include <zephyr/drivers/i2c.h>
#include <string.h>

LOG_MODULE_REGISTER(i2c_helper, LOG_LEVEL_INF);

static const struct device *i2c_dev = DEVICE_DT_GET(DT_NODELABEL(i2c2));

int32_t I2C_Init(void) {
    if (!device_is_ready(i2c_dev)) {
        LOG_ERR("I2C device not ready");
        return -1;
    }
    return 0;
}

int32_t I2C_DeInit(void) {
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
    if (i2c_write(i2c_dev, (uint8_t *)&reg, 1, 0x3C) != 0) {
        return -1;
    }
    if (i2c_read(i2c_dev, data, length, 0x3C) != 0) {
        return -1;
    }
    return 0;
}
