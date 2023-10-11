################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MGPIO/MGPIO_Prog.c 

C_DEPS += \
./MCAL/MGPIO/MGPIO_Prog.d 

OBJS += \
./MCAL/MGPIO/MGPIO_Prog.o 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MGPIO/%.o: ../MCAL/MGPIO/%.c MCAL/MGPIO/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-MCAL-2f-MGPIO

clean-MCAL-2f-MGPIO:
	-$(RM) ./MCAL/MGPIO/MGPIO_Prog.d ./MCAL/MGPIO/MGPIO_Prog.o

.PHONY: clean-MCAL-2f-MGPIO

