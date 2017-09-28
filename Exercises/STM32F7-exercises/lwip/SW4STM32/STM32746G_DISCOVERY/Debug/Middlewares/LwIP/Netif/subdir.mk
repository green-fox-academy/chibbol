################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/src/netif/ethernet.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/system/OS/sys_arch.c 

OBJS += \
./Middlewares/LwIP/Netif/ethernet.o \
./Middlewares/LwIP/Netif/sys_arch.o 

C_DEPS += \
./Middlewares/LwIP/Netif/ethernet.d \
./Middlewares/LwIP/Netif/sys_arch.d 


# Each subdirectory must supply rules for building sources it contributes
Middlewares/LwIP/Netif/ethernet.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/src/netif/ethernet.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCOVERY_lwip -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/lwip/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/lwip/Src" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/src/include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/system" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Middlewares/LwIP/Netif/sys_arch.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/system/OS/sys_arch.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCOVERY_lwip -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/lwip/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/lwip/Src" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/src/include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/LwIP/system" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/portable/GCC/ARM_CM7/r0p1" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/CMSIS_RTOS" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/Third_Party/FreeRTOS/Source/include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -Os -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


