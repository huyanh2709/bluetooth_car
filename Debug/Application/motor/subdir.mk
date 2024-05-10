################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/motor/motor.c 

OBJS += \
./Application/motor/motor.o 

C_DEPS += \
./Application/motor/motor.d 


# Each subdirectory must supply rules for building sources it contributes
Application/motor/%.o Application/motor/%.su Application/motor/%.cyclo: ../Application/motor/%.c Application/motor/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/motor" -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/pwm" -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/car" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Application-2f-motor

clean-Application-2f-motor:
	-$(RM) ./Application/motor/motor.cyclo ./Application/motor/motor.d ./Application/motor/motor.o ./Application/motor/motor.su

.PHONY: clean-Application-2f-motor

