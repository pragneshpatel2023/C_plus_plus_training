/*
 * servo.h
 *
 *  Created on: Nov 8, 2026
 *      Author: Pragnesh Patel
 */

#ifndef INC_SERVO_H_
#define INC_SERVO_H_

#include "pinmap.h"

typedef enum
{
    SERVO_RIGHTPOSITION = 500,
    SERVO_MIDPOSITION = 1500,
    SERVO_LEFTPOSITION = 2500
}servo_position_t;


class Servo
{
    private:
        TIM_HandleTypeDef htim;
        uint8_t pwmCh;
    public:
        Servo(pinStruct_t& servoPin,
                  TIM_TypeDef* TIMx,
                  uint8_t gpioAFSelTIMx,
                  uint8_t pwmChannel);
        void TurnShaft(uint32_t position);
};

#endif /* INC_SERVO_H_ */
