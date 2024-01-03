################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (11.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../Application/User/Core/controller.c \
../Application/User/Core/lcd_i2c.c \
C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/main.c \
C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/stm32f1xx_hal_msp.c \
C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/stm32f1xx_it.c \
../Application/User/Core/syscalls.c \
../Application/User/Core/sysmem.c 

OBJS += \
./Application/User/Core/controller.o \
./Application/User/Core/lcd_i2c.o \
./Application/User/Core/main.o \
./Application/User/Core/stm32f1xx_hal_msp.o \
./Application/User/Core/stm32f1xx_it.o \
./Application/User/Core/syscalls.o \
./Application/User/Core/sysmem.o 

C_DEPS += \
./Application/User/Core/controller.d \
./Application/User/Core/lcd_i2c.d \
./Application/User/Core/main.d \
./Application/User/Core/stm32f1xx_hal_msp.d \
./Application/User/Core/stm32f1xx_it.d \
./Application/User/Core/syscalls.d \
./Application/User/Core/sysmem.d 


# Each subdirectory must supply rules for building sources it contributes
Application/User/Core/%.o Application/User/Core/%.su Application/User/Core/%.cyclo: ../Application/User/Core/%.c Application/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../../Core/Inc -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/Core/main.o: C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/main.c Application/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../../Core/Inc -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/Core/stm32f1xx_hal_msp.o: C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/stm32f1xx_hal_msp.c Application/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../../Core/Inc -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"
Application/User/Core/stm32f1xx_it.o: C:/Users/Nikhi/Stm/WGN_CNTLR_F1/Core/Src/stm32f1xx_it.c Application/User/Core/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m3 -std=gnu11 -g3 -DDEBUG -DUSE_HAL_DRIVER -DSTM32F103xB -c -I../../Core/Inc -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I"C:/Users/Nikhi/Stm/WGN_CNTLR_F1/STM32CubeIDE/Application/User/Core" -I../../Drivers/STM32F1xx_HAL_Driver/Inc -I../../Drivers/STM32F1xx_HAL_Driver/Inc/Legacy -I../../Drivers/CMSIS/Device/ST/STM32F1xx/Include -I../../Drivers/CMSIS/Include -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfloat-abi=soft -mthumb -o "$@"

clean: clean-Application-2f-User-2f-Core

clean-Application-2f-User-2f-Core:
	-$(RM) ./Application/User/Core/controller.cyclo ./Application/User/Core/controller.d ./Application/User/Core/controller.o ./Application/User/Core/controller.su ./Application/User/Core/lcd_i2c.cyclo ./Application/User/Core/lcd_i2c.d ./Application/User/Core/lcd_i2c.o ./Application/User/Core/lcd_i2c.su ./Application/User/Core/main.cyclo ./Application/User/Core/main.d ./Application/User/Core/main.o ./Application/User/Core/main.su ./Application/User/Core/stm32f1xx_hal_msp.cyclo ./Application/User/Core/stm32f1xx_hal_msp.d ./Application/User/Core/stm32f1xx_hal_msp.o ./Application/User/Core/stm32f1xx_hal_msp.su ./Application/User/Core/stm32f1xx_it.cyclo ./Application/User/Core/stm32f1xx_it.d ./Application/User/Core/stm32f1xx_it.o ./Application/User/Core/stm32f1xx_it.su ./Application/User/Core/syscalls.cyclo ./Application/User/Core/syscalls.d ./Application/User/Core/syscalls.o ./Application/User/Core/syscalls.su ./Application/User/Core/sysmem.cyclo ./Application/User/Core/sysmem.d ./Application/User/Core/sysmem.o ./Application/User/Core/sysmem.su

.PHONY: clean-Application-2f-User-2f-Core

