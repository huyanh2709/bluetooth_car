/*
 * car.c
 *
 *  Created on: Mar 25, 2024
 *      Author: phamh
 */

#include "car.h"

Motor_TypeDef motor_left;
Motor_TypeDef motor_right;

void car_init(TIM_HandleTypeDef *_htim,GPIO_TypeDef *L_IO_PORT, uint16_t L_IO_PIN, uint32_t L_tim_channel,
		GPIO_TypeDef *R_IO_PORT, uint16_t R_IO_PIN, uint32_t R_tim_channel)
{
	motor_init(&motor_left, L_IO_PORT, L_IO_PIN, _htim, L_tim_channel);
	motor_init(&motor_right, R_IO_PORT, R_IO_PIN, _htim, R_tim_channel);
	car_control(CAR_STOP, 0);
}



void car_control(CarState car_state, uint8_t speed)
{
	switch(car_state)
	{
		case CAR_STOP:
			motor_control(&motor_left, MOTOR_STOP, 0);
			motor_control(&motor_right, MOTOR_STOP, 0);
			break;
		case CAR_FORWARD:
			motor_control(&motor_left, MOTOR_CW, speed);
			motor_control(&motor_right, MOTOR_CW, speed);
			break;
		case CAR_BACKWARD:
			motor_control(&motor_left, MOTOR_CCW, speed);
			motor_control(&motor_right, MOTOR_CCW, speed);
			break;
		case CAR_TURNLEFT:
			motor_control(&motor_left, MOTOR_STOP, 0);
			motor_control(&motor_right, MOTOR_CW, speed);
			break;
		case CAR_TURNRIGHT:
			motor_control(&motor_left, MOTOR_CW, speed);
			motor_control(&motor_right, MOTOR_STOP, 0);
			break;
	}
}

