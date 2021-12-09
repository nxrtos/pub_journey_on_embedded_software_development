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

#define  BUTTON_DEBOUNCE_TICKS		10

volatile uint32_t user_button_state , user_button_changed;
uint32_t prev_state ;
SYSTick_Timer_t  button_debounce_timer;

void init_button_state()
{
  user_button_state = BSP_PB_GetState(BUTTON_KEY);
  prev_state = user_button_state;
  user_button_changed = 0;
  stop_systick_timer(&button_debounce_timer);
}

void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin)
{
  if(BUTTON_PIN[0] == GPIO_Pin)
  {
	  user_button_state = BSP_PB_GetState(BUTTON_KEY);
	  if(prev_state != user_button_state)
	  {
	    user_button_changed = 1;
	    prev_state = user_button_state;
	    // disable IRQ
	    HAL_NVIC_DisableIRQ(BUTTON_IRQn[0]);
	    // start debounce_timer
	    start_systick_timer(&button_debounce_timer, BUTTON_DEBOUNCE_TICKS);
	  }
  }
}

void button_debouce_followup_process(void)
{
  stop_systick_timer(&button_debounce_timer);
  user_button_state = BSP_PB_GetState(BUTTON_KEY);
  if(prev_state != user_button_state)
  {
    user_button_changed = 1;
	prev_state = user_button_state;
	// disable IRQ
	HAL_NVIC_DisableIRQ(BUTTON_IRQn[0]);
	// start debounce_timer
	start_systick_timer(&button_debounce_timer, BUTTON_DEBOUNCE_TICKS);
  }
  else
  {
    stop_systick_timer(&button_debounce_timer);
    // re-enable IRQ
    HAL_NVIC_EnableIRQ(BUTTON_IRQn[0]);
    // it may double check button state after enable IRQ
    // to ensure no miss button state change
    user_button_state = BSP_PB_GetState(BUTTON_KEY);
    if(prev_state != user_button_state)
    {
      user_button_changed = 1;
      prev_state = user_button_state;
      // disable IRQ
      HAL_NVIC_DisableIRQ(BUTTON_IRQn[0]);
      // start debounce_timer
      start_systick_timer(&button_debounce_timer, BUTTON_DEBOUNCE_TICKS);
    }
  }
}
