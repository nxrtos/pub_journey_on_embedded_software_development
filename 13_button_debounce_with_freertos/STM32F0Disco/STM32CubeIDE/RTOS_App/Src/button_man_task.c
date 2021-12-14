/**
  ******************************************************************************
  * @file           : button_man_task.c
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
#include  "button_man_task.h"
#include  "button_interrupt.h"
#include  "led_toggle_task.h"

const osThreadAttr_t button_man_task_attributes = {
  .name = "but_manTask",
  .stack_size = 128 * 4,
  .priority = (osPriority_t) osPriorityNormal,
};

osSemaphoreId_t sema_button = NULL;
/**
  * @brief  The application entry point.
  * @retval void
  */

void but_man_task(void *argument)
{
  /* USER CODE BEGIN 1 */
  init_button_state();
  sema_button = osSemaphoreNew (1 , 0, NULL);
  if(NULL == sema_button) {
    return ;
  }
  /* USER CODE END 1 */

  while (1)
  {
    osSemaphoreAcquire (sema_button, osWaitForever) ;
    do {
      prev_state = user_button_state;
      led_pattern_n++ ;
      osDelay(20);
      user_button_state = BSP_PB_GetState(BUTTON_KEY);
    } while(prev_state != user_button_state);
    // re-enable IRQ
    HAL_NVIC_EnableIRQ(BUTTON_IRQn[0]);
  }
  return;
}
