################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MEXTI/MEXTI_Prog.c 

C_DEPS += \
./MCAL/MEXTI/MEXTI_Prog.d 

OBJS += \
./MCAL/MEXTI/MEXTI_Prog.o 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MEXTI/%.o: ../MCAL/MEXTI/%.c MCAL/MEXTI/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-MCAL-2f-MEXTI

clean-MCAL-2f-MEXTI:
	-$(RM) ./MCAL/MEXTI/MEXTI_Prog.d ./MCAL/MEXTI/MEXTI_Prog.o

.PHONY: clean-MCAL-2f-MEXTI

