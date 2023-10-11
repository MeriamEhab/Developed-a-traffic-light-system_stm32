/*
 * MEXTI_Int.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Meriam Ehab
 */

#ifndef MCAL_MEXTI_MEXTI_INT_H_
#define MCAL_MEXTI_MEXTI_INT_H_


/**************************************  Enumerations *******************************************/

typedef enum {
	Rising,
	Falling,
	Any_Change
}EXTI_Trigger;

typedef enum {
	EXTI_Line_0, EXTI_Line_1, EXTI_Line_2, EXTI_Line_3, EXTI_Line_4, EXTI_Line_5,
	EXTI_Line_6, EXTI_Line_7, EXTI_Line_8, EXTI_Line_9, EXTI_Line_10,
	EXTI_Line_11, EXTI_Line_12, EXTI_Line_13, EXTI_Line_14, EXTI_Line_15,
	EXTI_Line_16, EXTI_Line_17, EXTI_Line_18, EXTI_Line_21 = 21, EXTI_Line_22
}EXTI_Line_x;

typedef enum {
	SYSCFG_PORTA, SYSCFG_PORTB, SYSCFG_PORTC, SYSCFG_PORTD,
	SYSCFG_PORTE,    RESERVED1,    RESERVED2, SYSCFG_PORTH
}SYSCFG_Port;




/************************************* Function Prototypes *********************************************/

/*******************************************************************************************************/
/*                                  01- MEXTI_vHWInterruptEnable                                       */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to Set the Interrupt mask on for the required Line            			   */
/* Input       : LINE                                                                  				   */
/* Return      : None                                                               		   	   	   */
/*******************************************************************************************************/

void MEXTI_vHWInterruptEnable(EXTI_Line_x LINE);

/*******************************************************************************************************/
/*                                  02- MEXTI_vHWInterruptDisable                                      */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to Set the Interrupt mask off for the required Line            			   */
/* Input       : LINE                         											   			   */
/* Return      : None                                                                 			       */
/*******************************************************************************************************/

void MEXTI_vHWInterruptDisable(EXTI_Line_x LINE);

/*******************************************************************************************************/
/*                                   03- MEXTI_vHWEventEnable                                          */
/*-----------------------------------------------------------------------------------------------------*/
/* 1- Function Description : Function to Set the Event mask on for the required Line                   */
/* 2- Function Input       : LINE                                                                      */
/* 3- Function Return      : None                                                                      */
/*******************************************************************************************************/

void MEXTI_vHWEventEnable(EXTI_Line_x LINE);

/*******************************************************************************************************/
/*                               	   04- MEXTI_vHWEventDisable                                       */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to Set the Event mask off for the required Line               			   */
/* Input       : LINE                     												 			   */
/* Return      : None                                                               				   */
/*******************************************************************************************************/

void MEXTI_vHWEventDisable(EXTI_Line_x LINE);

/*******************************************************************************************************/
/*                                  05- MEXTI_vSoftwareInterrupt                                       */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to activate Software Interrupt 					               			   */
/* Input       : LINE              											           				   */
/* Return      : None                                                               				   */
/*******************************************************************************************************/

void MEXTI_vSoftwareInterrupt(EXTI_Line_x LINE);

/*******************************************************************************************************/
/*                                    06- MEXTI_vSetTriggerType                                        */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to set the trigger type the interrupt/event will activate on    			   */
/* Input       : LINE, Trigger              											   			   */
/* Return      : None                                                                				   */
/*******************************************************************************************************/

void MEXTI_vSetTriggerType(EXTI_Line_x LINE, EXTI_Trigger Trigger);

/*******************************************************************************************************/
/*                                     07- MEXTI_vSetExtiConfig                                        */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to configure the external interrupt to a port in the system configuration    */
/* Input       : LINE, PORT              											       			   */
/* Return      : None                                                                				   */
/*******************************************************************************************************/

void MEXTI_vSetExtiConfig(EXTI_Line_x LINE, SYSCFG_Port PORT);

/*******************************************************************************************************/
/*                                     08- MEXTI_vSetCallback                                          */
/*-----------------------------------------------------------------------------------------------------*/
/* Description : Function to set the callback function to the line it will correspond to  			   */
/* Input       : LINE, *ptr()              											   				   */
/* Return      : None                                                                 				   */
/*******************************************************************************************************/

void MEXTI_vSetCallback(EXTI_Line_x LINE, void(*ptr)(void));

#endif /* MCAL_MEXTI_MEXTI_INT_H_ */
