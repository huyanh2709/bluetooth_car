################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/car/car.c 

OBJS += \
./Application/car/car.o 

C_DEPS += \
./Application/car/car.d 


# Each subdirectory must supply rules for building sources it contributes
Application/car/%.o Application/car/%.su Application/car/%.cyclo: ../Application/car/%.c Application/car/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../Core/Inc -I../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../Drivers/STM32F1xx_HAL_Driver/Inc -I../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../Drivers/CMSIS/Include -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/motor" -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/pwm" -I"D:/STM32 cube/stm32f1_register/Bluetooth_car/Application/car" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Application-2f-car

clean-Application-2f-car:
	-$(RM) ./Application/car/car.cyclo ./Application/car/car.d ./Application/car/car.o ./Application/car/car.su

.PHONY: clean-Application-2f-car

