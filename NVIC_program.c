/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 1 jan 2024             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F446xx             */
/**********************************************/

#include <stdint.h>
#include "STM32F446xx.h"
#include "ERRTYPE.h"
#include "NVIC_interfaces.h"
#include "NVIC_private.h"

void NVIC_Enable(IRQn_Type IRQn)
{
	uint8_t REG_NUM=IRQn/32;
	uint8_t BIT_NUM=IRQn%32;
	NVIC->ISER[REG_NUM]=1<<BIT_NUM;
	//ISER[REG_NUM]=1<<BIT_NUM;
}

void NVIC_Disable(IRQn_Type IRQn)
{
	uint8_t REG_NUM=IRQn/32;
	uint8_t BIT_NUM=IRQn%32;
	NVIC->ICER[REG_NUM]=1<<BIT_NUM;
	//ICER[REG_NUM]=1<<BIT_NUM;
}

void NVIC_SetPendingFLAG (IRQn_Type IRQn)
{
	uint8_t REG_NUM=IRQn/32;
	uint8_t BIT_NUM=IRQn%32;
	NVIC->ISPR[REG_NUM]=1<<BIT_NUM;
	//ISPR[REG_NUM]=1<<BIT_NUM;
}

void NVIC_ClearPendingFLAG (IRQn_Type IRQn)
{
	uint8_t REG_NUM=IRQn/32;
	uint8_t BIT_NUM=IRQn%32;
	NVIC->ICPR[REG_NUM]=1<<BIT_NUM;
	//ICPR[REG_NUM]=1<<BIT_NUM;
}

uint8_t NVIC_GetActive(IRQn_Type IRQn)
{
	uint8_t rbit;
	uint8_t REG_NUM=IRQn/32;
	uint8_t BIT_NUM=IRQn%32;
	rbit=((NVIC->IABR[REG_NUM] >> BIT_NUM) & 1);
	return rbit;
}
