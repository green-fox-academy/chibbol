################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/control.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/main.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/stm32f7xx_hal_msp.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/stm32f7xx_it.c 

OBJS += \
./CtrlLoop/User/control.o \
./CtrlLoop/User/main.o \
./CtrlLoop/User/stm32f7xx_hal_msp.o \
./CtrlLoop/User/stm32f7xx_it.o 

C_DEPS += \
./CtrlLoop/User/control.d \
./CtrlLoop/User/main.d \
./CtrlLoop/User/stm32f7xx_hal_msp.d \
./CtrlLoop/User/stm32f7xx_it.d 


# Each subdirectory must supply rules for building sources it contributes
CtrlLoop/User/control.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/control.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CtrlLoop/User/main.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CtrlLoop/User/stm32f7xx_hal_msp.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/stm32f7xx_hal_msp.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

CtrlLoop/User/stm32f7xx_it.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Src/stm32f7xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/ctrl_loop/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/Common" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ov9655" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/rk043fn48h" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/n25q128a" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/wm8994" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Log" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/Fonts" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Utilities/CPU" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -Wno-strict-aliasing -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


