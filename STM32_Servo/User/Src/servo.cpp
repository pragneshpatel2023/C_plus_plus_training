/*
 * servo.cpp
 *
 *  Created on: Nov 7, 2026
 *      Author: Pragnesh Patel
 */

#include "servo.h"

Servo::Servo(pinStruct_t &servoPin, TIM_TypeDef *TIMx, uint8_t gpioAFSelTIMx,
        uint8_t pwmChannel)
{

    pwmCh = pwmChannel;
    GPIO_InitTypeDef GPIO_InitStruct = { 0 };

    __HAL_RCC_GPIOA_CLK_ENABLE();
    /**TIM1 GPIO Configuration
     PA8     ------> TIM1_CH1
     */
    GPIO_InitStruct.Pin = GPIO_PIN_8;
    GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
    GPIO_InitStruct.Pull = GPIO_NOPULL;
    GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
    GPIO_InitStruct.Alternate = gpioAFSelTIMx;
    HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

    //TIM config
    TIM_MasterConfigTypeDef sMasterConfig = { 0 };
    TIM_OC_InitTypeDef sConfigOC = { 0 };
    TIM_BreakDeadTimeConfigTypeDef sBreakDeadTimeConfig = { 0 };

    __HAL_RCC_TIM1_CLK_ENABLE();

    htim.Instance = TIMx;
    htim.Init.Prescaler = 99; // 100MHz / (99 + 1) = 1MHz timer frequency (1 tick = 1us)
    htim.Init.CounterMode = TIM_COUNTERMODE_UP;
    htim.Init.Period = 19999; // 1MHz / 20000 = 50Hz (20ms);
    htim.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
    htim.Init.RepetitionCounter = 0;
    htim.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_ENABLE;
    HAL_TIM_PWM_Init(&htim);

    sMasterConfig.MasterOutputTrigger = TIM_TRGO_RESET;
    sMasterConfig.MasterSlaveMode = TIM_MASTERSLAVEMODE_DISABLE;
    HAL_TIMEx_MasterConfigSynchronization(&htim, &sMasterConfig);

    sConfigOC.OCMode = TIM_OCMODE_PWM1;
    sConfigOC.Pulse = SERVO_MIDPOSITION;
    sConfigOC.OCPolarity = TIM_OCPOLARITY_HIGH;
    sConfigOC.OCNPolarity = TIM_OCNPOLARITY_HIGH;
    sConfigOC.OCFastMode = TIM_OCFAST_DISABLE;
    sConfigOC.OCIdleState = TIM_OCIDLESTATE_RESET;
    sConfigOC.OCNIdleState = TIM_OCNIDLESTATE_RESET;
    HAL_TIM_PWM_ConfigChannel(&htim, &sConfigOC, pwmChannel);

    sBreakDeadTimeConfig.OffStateRunMode = TIM_OSSR_DISABLE;
    sBreakDeadTimeConfig.OffStateIDLEMode = TIM_OSSI_DISABLE;
    sBreakDeadTimeConfig.LockLevel = TIM_LOCKLEVEL_OFF;
    sBreakDeadTimeConfig.DeadTime = 0;
    sBreakDeadTimeConfig.BreakState = TIM_BREAK_DISABLE;
    sBreakDeadTimeConfig.BreakPolarity = TIM_BREAKPOLARITY_HIGH;
    sBreakDeadTimeConfig.AutomaticOutput = TIM_AUTOMATICOUTPUT_DISABLE;
    HAL_TIMEx_ConfigBreakDeadTime(&htim, &sBreakDeadTimeConfig);

    //Start PWM signal
    HAL_TIM_PWM_Start(&htim, pwmChannel);
}

void Servo::TurnShaft(uint32_t position)
{
    __HAL_TIM_SET_COMPARE(&htim,pwmCh, position);
}
