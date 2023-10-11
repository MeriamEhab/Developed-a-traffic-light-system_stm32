################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MRCC/MRCC_Prog.c 

C_DEPS += \
./MCAL/MRCC/MRCC_Prog.d 

OBJS += \
./MCAL/MRCC/MRCC_Prog.o 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MRCC/%.o: ../MCAL/MRCC/%.c MCAL/MRCC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-MCAL-2f-MRCC

clean-MCAL-2f-MRCC:
	-$(RM) ./MCAL/MRCC/MRCC_Prog.d ./MCAL/MRCC/MRCC_Prog.o

.PHONY: clean-MCAL-2f-MRCC

