/*
 * MNVIC_Int.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Meriam Ehab
 */

#ifndef MCAL_MNVIC_MNVIC_INT_H_
#define MCAL_MNVIC_MNVIC_INT_H_

typedef enum{
	MNVIC_G16_SG0 = 3,
	MNVIC_G8_SG2,
	MNVIC_G4_SG4,
	MNVIC_G2_SG8,
	MNVIC_G0_SG16
}Group_Mode;

void MNVIC_vInterruptSetEnable(u8 Copy_u8InterruptID);
void MNVIC_vInterruptClearEnable(u8 Copy_u8InterruptID);
void MNVIC_vSetGroupMode(Group_Mode Copy_GroupMode);
void MNVIC_vSetInterruptPriority(u8 Copy_u8InterruptID, u8 Copy_GroupID, u8 Copy_SubGroupID);


#endif /* MCAL_MNVIC_MNVIC_INT_H_ */
