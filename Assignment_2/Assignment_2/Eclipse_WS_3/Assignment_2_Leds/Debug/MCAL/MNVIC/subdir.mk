################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/MNVIC/MNVIC_Prog.c 

C_DEPS += \
./MCAL/MNVIC/MNVIC_Prog.d 

OBJS += \
./MCAL/MNVIC/MNVIC_Prog.o 


# Each subdirectory must supply rules for building sources it contributes
MCAL/MNVIC/%.o: ../MCAL/MNVIC/%.c MCAL/MNVIC/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: Cross GCC Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-MCAL-2f-MNVIC

clean-MCAL-2f-MNVIC:
	-$(RM) ./MCAL/MNVIC/MNVIC_Prog.d ./MCAL/MNVIC/MNVIC_Prog.o

.PHONY: clean-MCAL-2f-MNVIC

