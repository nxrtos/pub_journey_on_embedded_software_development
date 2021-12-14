/**
  ******************************************************************************
  * @file           : led_toggle_task.c
  * @brief          : thread body
  ******************************************************************************
  * @attention
  *
  *
  ******************************************************************************
  */
/* Includes ------------------------------------------------------------------*/
#include  "cmsis_os2.h"
#include  "bsp_ll.h"
#include  "bsp_slog.h"

const osThreadAttr_t led_toggle_task_attributes = {
  .name = "led_toggleTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

/**
  * @brief  The application entry point.
  * @retval void
  */

const unsigned  int led_timing[][2] = { {100 ,500},
										{500 ,500},
										{1000 ,200},
										{500 ,100}
									};
volatile unsigned  int  led_pattern_n = 0;

void led_toggle_task(void *argument)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */
  BSP_LED_Init(LED4);
  slog("> simple log started !\n\r");

  while (1)
  {
	BSP_LED_On(LED4);
	if (led_pattern_n >= sizeof(led_timing)/sizeof(unsigned  int)/2)
	{
	  led_pattern_n = 0;
	}
	osDelay(led_timing[led_pattern_n][0]);
	BSP_LED_Off(LED4);
	if (led_pattern_n >= sizeof(led_timing)/sizeof(unsigned  int)/2)
	{
	  led_pattern_n = 0;
	}
	osDelay(led_timing[led_pattern_n][1]);
  }
  return;
}
