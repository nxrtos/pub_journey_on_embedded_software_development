/**
  ******************************************************************************
  * @file    button_interrupt.c
  * @brief   This file contains source of button_interrupt
  ******************************************************************************
  * @attention
  *
  *
 ******************************************************************************
  */

#include  "button_interrupt.h"

volatile uint32_t user_button_state;

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(USER_BUTTON_PIN == GPIO_Pin)
  {
	  user_button_state = BSP_PB_GetState(BUTTON_USER);
  }
}
