/*
 * pinmap.h
 *
 *  Created on: Nov 8, 2026
 *      Author: Pragnesh Patel
 */

#ifndef INC_PINMAP_H_
#define INC_PINMAP_H_

#include "stm32f4xx_hal.h"              // Keil::Device:STM32Cube HAL:Common

typedef struct
{
    GPIO_TypeDef* port;
    uint16_t selectedPin;
}pinStruct_t;


#endif /* INC_PINMAP_H_ */
