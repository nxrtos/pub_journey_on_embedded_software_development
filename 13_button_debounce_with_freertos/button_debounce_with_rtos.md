# Button De-Bounce Implementation with RTOS facility , an example of  FreeRTOS

>In this demo implement a button de-bounce. In button's ISR disable the IRQ , and then in Task of button_man re-enable the  button's IRQ after  de-bounce timeout . 
>
>It is flow control to the input of button state , similar idea with bare-mental implementation but leverage on RTOS mechanism now. 
