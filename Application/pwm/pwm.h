/*
 * pwm.h
 *
 *  Created on: Mar 21, 2024
 *      Author: phamh
 */

#ifndef PWM_PWM_H_
#define PWM_PWM_H_

#include "main.h"

//Set duty cycle
void pwm_set_duty(TIM_HandleTypeDef *htim, uint32_t channel, uint8_t duty);



#endif /* PWM_PWM_H_ */
