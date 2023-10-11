

#include <stdint.h>
#include "App.h"

/*#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif*/

int main(void)
{
	/************************** Clock Initialization *****************************/
	MRCC_vInit() ;
	MRCC_vEnableClock(AHB1 , RCC_GPIOA_EN);
	MRCC_vEnableClock(AHB1 , RCC_GPIOB_EN);
	MRCC_vEnableClock(APB2 , RCC_SYSCFG_EN);


	/************************** GPIO Configurations  *****************************/

	MGPIO_voidSetPinMode(PB_P, PB_PIN, _MODE_INPUT );         // Set Push button as Input (pin 0 in port A)
	MGPIO_voidSetPullType(PB_P, PB_PIN, _PULL_DOWN);		  // Set Pull Up in Push button Pin

	MGPIO_voidSetPinMode(LED_P, LED_BLUE, _MODE_OUTPUT );     // Set LEDs as Output (pins 0,1,2 in order in port B)
	MGPIO_voidSetPinMode(LED_P, LED_GREEN, _MODE_OUTPUT );
	MGPIO_voidSetPinMode(LED_P, LED_RED, _MODE_OUTPUT );

	/************************** NVIC Configurations  *****************************/

	MNVIC_vInterruptSetEnable(6);					// EXTI0
	MNVIC_vSetGroupMode(MNVIC_G4_SG4);
	MNVIC_vSetInterruptPriority(6, 0, 0);		    // Make EXTI0 in Group 0 with Priority 0

	MEXTI_vHWInterruptEnable(EXTI_Line_0);
	MEXTI_vSetTriggerType(EXTI_Line_0, Rising);
	MEXTI_vSetExtiConfig(EXTI_Line_0, SYSCFG_PORTA);
	MEXTI_vSetCallback(EXTI_Line_0, APP_vLED_ON_5sec);

	for(;;){};
}
/******************** Functions ***********************/

/******************************************************
 * Function: 	Delay Function
 * Inputs: 		Time in Milliseconds
 * Outputs:		None
 ******************************************************/
void _delay_ms(u32 time)
{
	for(u32 i = 0; i < time; i++)
	{
		for(u32 j = 0; j<2000; j++)
		{}
	}
}
/******************************************************
 * Function: 	LED ON Function
 * Inputs: 		None
 * Outputs:		None
 ******************************************************/
void APP_vLED_ON_5sec(void){
	if (MGPIO_u8ReadData(PB_P, PB_PIN) & 0x01)  // push button is pressed
	{
		MGPIO_voidWriteData(LED_P ,LED_BLUE, _HIGH); //Leds are ON
		MGPIO_voidWriteData(LED_P ,LED_GREEN, _HIGH);
		MGPIO_voidWriteData(LED_P ,LED_RED, _HIGH);
	}
	_delay_ms(5000);
	MGPIO_voidWriteData(LED_P ,LED_BLUE, _LOW);   //Leds are OFF
	MGPIO_voidWriteData(LED_P ,LED_GREEN, _LOW);
	MGPIO_voidWriteData(LED_P ,LED_RED, _LOW);
}
