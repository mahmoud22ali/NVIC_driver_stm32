/**********************************************/
/* Author  			: Mahmoud Sayed 	      */
/* Date    			: 1 jan 2024             */
/* Version 			: V02                     */
/* Microcontroller  : STM32F446xx             */
/**********************************************/

#ifndef NVIC_INTERFACING_H_
#define NVIC_INTERFACING_H_

typedef enum
{
	WWDG=0			,
	PVD				,
	TAMP_STAMP		,
	RTC_WKUP		,
	FLASH			,
	Rcc				,
	EXTI0			,
	EXTI1			,
	EXTI2			,
	EXTI3			,
	EXTI4			,
	DMA1_Stream0	,
	DMA1_Stream1		,
	DMA1_Stream2			,
	DMA1_Stream3		,
	DMA1_Stream4		,
	DMA1_Stream5		,
	DMA1_Stream6			,
	ADC	,
	CAN1_TX	,
	CAN1_RX0		,
	CAN1_RX1			,
	CAN1_SCE		,
	EXTI9_5		,
	TIM1_BRK_TIM9		,
	TIM1_UP_TIM10			,
	TIM1_TRG_COM_TIM11	,
	TIM1_CC	,
	TIM2		,
	TIM3			,
	TIM4		,
	I2C1_EV		,
	I2C1_ER		,
	I2C2_EV			,
	I2C2_ER	,
	SPI1	,
	SPI2		,
	USART1			,
	USART2		,
	USART3		,
	EXTI15_10
}IRQn_Type;

void NVIC_Enable(IRQn_Type IRQn);
void NVIC_Disable(IRQn_Type IRQn);
void NVIC_SetPendingFLAG (IRQn_Type IRQn);
void NVIC_ClearPendingFLAG (IRQn_Type IRQn);
uint8_t NVIC_GetActive(IRQn_Type IRQn);

#endif 
