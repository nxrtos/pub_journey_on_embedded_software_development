/**
  ******************************************************************************
  * @file           : app_start.c
  * @brief          : thread body
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include "app_start.h"

/* USER CODE BEGIN PV */
SYSTick_Timer_t  timer_1, timer_2, timer_3 , timer_4;
/* USER CODE END PV */
/**
  * @brief  The application entry point.
  * @retval int
  */
int app_start(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  BSP_LED_Init(LED4);
  BSP_LED_Init(LED3);
  BSP_LED_Init(LED5);
  BSP_LED_Init(LED6);
  // BSP_PB_Init(BUTTON_KEY, BUTTON_MODE_EXTI);
  // let MX_GPIO_Init it to GPIO_MODE_IT_RISING_FALLING
  init_button_state();
  start_systick_timer(&timer_1, 100);
  start_systick_timer(&timer_2, 100);
  start_systick_timer(&timer_3, 100);
  start_systick_timer(&timer_4, 100);
  slog("> simple log started !\n\r");

  while (1)
  {
    if(Timer_Expired == get_systick_timer(&timer_1))
    {
      BSP_LED_Toggle(LED4);
      start_systick_timer(&timer_1, 500);
    }
    if(Timer_Expired == get_systick_timer(&timer_2))
    {
      BSP_LED_Toggle(LED6);
      start_systick_timer(&timer_2, 1000);
    }
    if(Timer_Expired == get_systick_timer(&button_debounce_timer))
    {
      user_button_changed = 0;
      button_debouce_followup_process();
    }

    if(user_button_state)
    { // BUTTON_KEY pressed
      if(Timer_Expired == get_systick_timer(&timer_3))
      {
        BSP_LED_Toggle(LED5);
        start_systick_timer(&timer_3, 100);
        slog("> user button pressed !\n\r");
      }
      start_systick_timer(&timer_4, 1000);
    }
    else
    {
      if(Timer_Expired == get_systick_timer(&timer_4))
      {
        BSP_LED_Toggle(LED5);
        start_systick_timer(&timer_4, 1000);
      }
      start_systick_timer(&timer_3, 100);
    }
    /* USER CODE END WHILE */
    MX_USB_HOST_Process();

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
  return 0;
}
