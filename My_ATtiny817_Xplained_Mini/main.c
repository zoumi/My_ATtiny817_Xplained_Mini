#include <atmel_start.h>
#include <util/delay.h>
#include <stdio.h>
#include <string.h>
#include <usart_basic.h>
#include <atomic.h>

int main(void)
{
	/* Initializes MCU, drivers and middleware */
	//atmel_start_init();
	LED_set_dir(PORT_DIR_OUT);

	/* Replace with your application code */
	while (1) {
		//_delay_ms(500);
		//LED_toggle_level();
		LED_set_level(0);
		_delay_ms(1000);
		LED_set_level(1);
		_delay_ms(1000);
		VPORTC.DIR.
		};
		
}
