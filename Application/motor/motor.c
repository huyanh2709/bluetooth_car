/*
 * motor.c
 *
 *  Created on: Mar 21, 2024
 *      Author: phamh
 */

#include "motor.h"

//Motor INIT
void motor_init(Motor_TypeDef *motor,GPIO_TypeDef *_IO_PORT,uint16_t _IO_PIN,
		TIM_HandleTypeDef *_htim,uint32_t _tim_channel)
{
	motor->IO_PORT = _IO_PORT;
	motor->IO_PIN = _IO_PIN;
	motor->htim = _htim;
	motor->tim_channel = _tim_channel;
	motor->speed = 0;
}

//Control motor
void motor_control(Motor_TypeDef *motor, MotorState state, uint8_t speed)
{
	motor->speed = speed;
	motor->state = state;
	switch(state)
	{
		case MOTOR_STOP:
			HAL_GPIO_WritePin(motor->IO_PORT, motor->IO_PIN, GPIO_PIN_RESET);
			pwm_set_duty(motor->htim, motor->tim_channel, 0);
			break;
		case MOTOR_CW:
			HAL_GPIO_WritePin(motor->IO_PORT, motor->IO_PIN, GPIO_PIN_RESET);
			pwm_set_duty(motor->htim, motor->tim_channel, speed);
			break;
		case MOTOR_CCW:
			HAL_GPIO_WritePin(motor->IO_PORT, motor->IO_PIN, GPIO_PIN_SET);
			pwm_set_duty(motor->htim, motor->tim_channel, 100-speed);
			break;
	}
}



