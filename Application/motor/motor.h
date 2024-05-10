/*
 * motor.h
 *
 *  Created on: Mar 21, 2024
 *      Author: phamh
 */

#ifndef MOTOR_MOTOR_H_
#define MOTOR_MOTOR_H_

#include "main.h"
#include "pwm.h"

typedef enum{
	MOTOR_STOP,
	MOTOR_CW, //thuan chieu
	MOTOR_CCW //nguoc chieu
}MotorState;

typedef struct{
	GPIO_TypeDef *IO_PORT;
	uint16_t IO_PIN;
	TIM_HandleTypeDef *htim;
	uint32_t tim_channel;
	uint8_t speed;
	MotorState state;
}Motor_TypeDef;


//Motor INIT
void motor_init(Motor_TypeDef *motor,GPIO_TypeDef *_IO_PORT,uint16_t IO_PIN,TIM_HandleTypeDef *_htim,
		uint32_t _tim_channel);

//Control motor
void motor_control(Motor_TypeDef *motor, MotorState state, uint8_t speed);



#endif /* MOTOR_MOTOR_H_ */
