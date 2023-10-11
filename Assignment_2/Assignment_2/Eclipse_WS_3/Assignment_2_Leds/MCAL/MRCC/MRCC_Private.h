/*
 * MRCC_Private.h
 *
 *  Created on: Sep 5, 2023
 *      Author: Meriam Ehab
 */

#ifndef MCAL_MRCC_MRCC_PRIVATE_H_
#define MCAL_MRCC_MRCC_PRIVATE_H_


/************************** RCC_RC **************************************/

#define HSION   	0		//Internal high-speed clock enable
#define HSIRDY  	1		//Internal high-speed clock ready flag
#define HSITRIM0	3
#define HSITRIM1	4
#define HSITRIM2	5
#define HSITRIM3	5
#define HSITRIM4	7

#define HSICAL0		8
#define HSICAL1		9
#define HSICAL2		10
#define HSICAL3		11
#define HSICAL4		12
#define HSICAL5		13
#define HSICAL6		14
#define HSICAL7		15

#define HSEON   	16		//HSE clock enable
#define HSERDY  	17		//HSE clock ready flag
#define HSEBYP  	18		//HSE clock bypass
#define CSSON   	19		//Clock security system enable
#define PLLON   	24		//Main PLL (PLL) enable
#define PLLRDY  	25		//Main PLL (PLL) clock ready flag
#define PLLI2SON	26 		//PLLI2S enable
#define PLLI2SRDY   27 		//PLLI2S clock ready flag


#define SW0     0
#define SW1     1

/************************** RCC BASE ADDRESS  **************************************/
#define RCC_BASE_ADDR  0x40023800 		//From Memory Map in Datasheet (P38)

/************************** RCC REGISTERS  **************************************/
typedef struct{

	u32 CR;
	u32 PLLCFGR;
	u32 CFGR;
	u32 CIR;
	u32 AHB1RSTR;
	u32 AHB2RSTR;
	u32 Reserved1;
	u32 Reserved2;
	u32 APB1RSTR;
	u32 APB2RSTR;
	u32 Reserved3;
	u32 Reserved4;
	u32 AHB1ENR;
	u32 AHB2ENR;
	u32 Reserved5;
	u32 Reserved6;
	u32 APB1ENR;
	u32 APB2ENR;
	u32 Reserved7;
	u32 Reserved8;
	u32 AHB1LPENR;
	u32 AHB2LPENR;
	u32 Reserved9;
	u32 Reserved10;
	u32 APB1LPENR;
	u32 APB2LPENR;
	u32 Reserved11;
	u32 Reserved12;
	u32 BDCR;
	u32 CSR;
	u32 Reserved13;
	u32 Reserved14;
	u32 SSCGR;
	u32 PLLI2SCFGR;
	u32 Reserved15;
	u32 DCKCFGR;

}RCC_MemMap_t;

/************************** RCC enums  **************************************/

typedef enum {
	AHB1, AHB2, APB1, APB2,
}RCC_ENR;

typedef enum {

	/************************* AHBx ****************************/
	RCC_GPIOA_EN, RCC_GPIOB_EN, RCC_GPIOC_EN, RCC_GPIOD_EN, RCC_GPIOE_EN,
	RCC_GPIOH_EN = 7, RCC_OTGFS_EN = 7, RCC_CRC_EN = 12, RCC_DMA1_EN = 21, RCC_DMA2_EN,

	/************************* APB1 ****************************/
	RCC_TIM2_EN = 0, RCC_TIM3_EN, RCC_TIM4_EN,  RCC_TI5M_EN, RCC_WWDG_EN = 11, RCC_SPI2_EN = 14,
	RCC_SPI3_EN, RCC_USART2_EN = 17, RCC_I2C1_EN = 21, RCC_I2C2_EN, RCC_I2C3_EN, RCC_PWR_EN = 28,

	/************************* APB2 ****************************/
	RCC_TIM1_EN = 0, RCC_USART1_EN = 4, RCC_USART6_EN, RCC_ADC1_EN = 8, RCC_SDIO_EN = 11,RCC_SPI1_EN,
	RCC_SPI4_EN, RCC_SYSCFG_EN, RCC_TIM9_EN = 16, RCC_TIM10_EN, RCC_TIM11_EN

}RCC_Peripheral;

#define RCC ((volatile RCC_MemMap_t*)(RCC_BASE_ADDR))

#endif /* MCAL_MRCC_MRCC_PRIVATE_H_ */
