#ifndef VL53L0X_H
#define VL53L0X_H

#include <zephyr/kernel.h>
#include <zephyr/device.h>
#include <zephyr/drivers/i2c.h>

// Standardadresse des VL53L0X
#define VL53L0X_I2C_ADDR 0x29

// Registerdefinitionen
#define IDENTIFICATION_MODEL_ID 0xC0
#define SYSRANGE_START 0x00
#define RESULT_INTERRUPT_STATUS 0x13
#define RESULT_RANGE_STATUS 0x14
#define SYSTEM_INTERRUPT_CLEAR 0x0B

// Funktionen
bool vl53l0x_init(const struct device *i2c_dev);
uint16_t vl53l0x_read_distance(const struct device *i2c_dev);

#endif // VL53L0X_H
