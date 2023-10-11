################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MSTK/MSYSTICK_Prog.c 

C_DEPS += \
./MCAL/MSTK/MSYSTICK_Prog.d 

OBJS += \
./MCAL/MSTK/MSYSTICK_Prog.o 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MSTK/%.o: ../MCAL/MSTK/%.c MCAL/MSTK/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-MCAL-2f-MSTK

clean-MCAL-2f-MSTK:
	-$(RM) ./MCAL/MSTK/MSYSTICK_Prog.d ./MCAL/MSTK/MSYSTICK_Prog.o

.PHONY: clean-MCAL-2f-MSTK

