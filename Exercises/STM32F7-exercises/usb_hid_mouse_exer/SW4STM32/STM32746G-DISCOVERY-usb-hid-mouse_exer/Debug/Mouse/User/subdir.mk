################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/main.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/stm32f7xx_it.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/usbd_conf.c \
/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/usbd_desc.c 

OBJS += \
./Mouse/User/main.o \
./Mouse/User/stm32f7xx_it.o \
./Mouse/User/usbd_conf.o \
./Mouse/User/usbd_desc.o 

C_DEPS += \
./Mouse/User/main.d \
./Mouse/User/stm32f7xx_it.d \
./Mouse/User/usbd_conf.d \
./Mouse/User/usbd_desc.d 


# Each subdirectory must supply rules for building sources it contributes
Mouse/User/main.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/main.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCO -DUSE_USB_FS -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Class/HID/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Mouse/User/stm32f7xx_it.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/stm32f7xx_it.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCO -DUSE_USB_FS -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Class/HID/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Mouse/User/usbd_conf.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/usbd_conf.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCO -DUSE_USB_FS -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Class/HID/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

Mouse/User/usbd_desc.o: /home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Src/usbd_desc.c
	@echo 'Building file: $<'
	@echo 'Invoking: MCU GCC Compiler'
	@echo $(PWD)
	arm-none-eabi-gcc -mcpu=cortex-m7 -mthumb -mfloat-abi=hard -mfpu=fpv5-sp-d16 -DUSE_HAL_DRIVER -DSTM32F746xx -DUSE_STM32746G_DISCO -DUSE_USB_FS -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Projects/STM32746G-Discovery/Exercises/usb_hid_mouse_exer/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Core/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Middlewares/ST/STM32_USB_Device_Library/Class/HID/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/STM32F7xx_HAL_Driver/Inc" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/STM32746G-Discovery" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components/ft5336" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/BSP/Components" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Device/ST/STM32F7xx/Include" -I"/home/chibbol/Desktop/STM32Cube_FW_F7_V1.7.0/Drivers/CMSIS/Include"  -O0 -g3 -Wall -fmessage-length=0 -ffunction-sections -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


