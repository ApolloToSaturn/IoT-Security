#ifndef GPIO_ADC_H
#define GPIO_ADC_H

#include <stdint.h> 

int init_gpio(void);
int read_gpio(void);
int init_adc(void);
int32_t read_adc(void);

#endif