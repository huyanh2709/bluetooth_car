/*
 * car.h
 *
 *  Created on: Mar 25, 2024
 *      Author: phamh
 */

#include "motor.h"

#ifndef CAR_CAR_H_
#define CAR_CAR_H_

typedef enum{
	CAR_STOP,
	CAR_FORWARD,
	CAR_BACKWARD,
	CAR_TURNLEFT,
	CAR_TURNRIGHT
}CarState;

void car_init(TIM_HandleTypeDef *_htim,GPIO_TypeDef *L_IO_PORT, uint16_t L_IO_PIN, uint32_t L_tim_channel,
		GPIO_TypeDef *R_IO_PORT, uint16_t R_IO_PIN, uint32_t R_tim_channel);

void car_control(CarState car_state, uint8_t speed);


#endif /* CAR_CAR_H_ */
