/*
 * pwm.c
 *
 *  Created on: Mar 21, 2024
 *      Author: phamh
 */

#include "pwm.h"

//Set duty cycle
void pwm_set_duty(TIM_HandleTypeDef *htim, uint32_t channel, uint8_t duty)
{
	uint16_t ccr = (htim->Instance->ARR) * duty / 100;
	switch(channel)
	{
		case TIM_CHANNEL_1:
			htim->Instance->CCR1 = ccr;
			break;
		case TIM_CHANNEL_2:
			htim->Instance->CCR2 = ccr;
			break;
		case TIM_CHANNEL_3:
			htim->Instance->CCR3 = ccr;
			break;
		case TIM_CHANNEL_4:
			htim->Instance->CCR4 = ccr;
			break;
		default: break;
	}
}


