#ifndef VL53L0X_H
#define VL53L0X_H

#include <zephyr/device.h>
#include <stdint.h>
#include <stdbool.h>

// I2C-Adresse des VL53L0X (Standard: 0x29)
#define VL53L0X_I2C_ADDR 0x29

// Registeradressen des VL53L0X
#define IDENTIFICATION_MODEL_ID                     0xC0
#define SYSRANGE_START                              0x00
#define RESULT_INTERRUPT_STATUS                     0x13
#define RESULT_RANGE_STATUS                         0x14
#define SYSTEM_INTERRUPT_CLEAR                      0x0B
#define FINAL_RANGE_CONFIG_MIN_COUNT_RATE_RTN_LIMIT 0x44
#define SYSTEM_INTERMEASUREMENT_PERIOD              0x04
#define MSRC_CONFIG_CONTROL                         0x60
#define VHV_CONFIG_PAD_SCL_SDA__EXTSUP_HV           0x89

// Öffentliche Funktionen
bool vl53l0x_init(const struct device *i2c_dev);
uint16_t vl53l0x_read_distance(const struct device *i2c_dev);
bool vl53l0x_set_signal_rate_limit(const struct device *i2c_dev, float limit_Mcps);
bool vl53l0x_set_timing_budget(const struct device *i2c_dev, uint32_t budget_us);
void vl53l0x_start_continuous(const struct device *i2c_dev, uint32_t period_ms);
void vl53l0x_stop_continuous(const struct device *i2c_dev);

#endif // VL53L0X_H
