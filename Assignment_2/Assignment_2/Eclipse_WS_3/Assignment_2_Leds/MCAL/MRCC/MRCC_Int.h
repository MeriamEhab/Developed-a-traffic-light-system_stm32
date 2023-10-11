/*
 * MRCC_Int.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Meriam Ehab
 */

#ifndef MCAL_MRCC_MRCC_INT_H_
#define MCAL_MRCC_MRCC_INT_H_

#include "MRCC_Private.h"

void MRCC_vInit(void) ;
void MRCC_vEnableClock(RCC_ENR REG , RCC_Peripheral PER);
void MRCC_vDisableClock(RCC_ENR REG , RCC_Peripheral PER);


#endif /* MCAL_MRCC_MRCC_INT_H_ */
