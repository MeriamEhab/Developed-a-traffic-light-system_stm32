/*
 * App.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Meriam Ehab
 */

#ifndef APP_H_
#define APP_H_

/************************** Includes  *****************************/

#include "MCAL/MGPIO/MGPIO_Interface.h"
#include "MCAL/MNVIC/MNVIC_Int.h"
#include "MCAL/MRCC/MRCC_Int.h"
#include "MCAL/MEXTI/MEXTI_Int.h"


/************************** Ports *****************************/

#define PB_P			_GPIOA_PORT
#define LED_P		    _GPIOB_PORT


/************************** Pins *****************************/

#define PB_PIN 			_PIN_0
#define LED_BLUE		_PIN_0
#define LED_GREEN		_PIN_1
#define LED_RED			_PIN_2

/******************** Function Definitions ***********************/

/*****************************************************************
 * Function: 	Delay Function
 * Inputs: 		Time in Milliseconds
 * Outputs:		None
 *****************************************************************/
void _delay_ms(u32 time);

/******************************************************************
 * Function: 	LED ON Function
 * Inputs: 		None
 * Outputs:		None
 ******************************************************************/
void APP_vLED_ON_5sec(void);

#endif /* APP_H_ */

