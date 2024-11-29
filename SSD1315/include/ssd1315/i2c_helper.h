// i2c_helper.h
#ifndef I2C_HELPER_H
#define I2C_HELPER_H

#include <stdint.h>

int32_t I2C_Init(void);
int32_t I2C_DeInit(void);
int32_t I2C_WriteReg(uint16_t reg, uint8_t *data, uint16_t length);
int32_t I2C_ReadReg(uint16_t reg, uint8_t *data, uint16_t length);

#endif // I2C_HELPER_H
