/*
 * main.c
 *
 *  Created on: Jan 26, 2017
 *      Author: GLinBoy
 */

#define  F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

void setup(){
	DDRD = 0XFF;
}

long m1_led_on(){
	return 0b0000001;
}

long m1_led_off(){
	return 0b0000000;
}

int main(void)
{
	setup();

    while (1)
    {
		PORTD = m1_led_on();
		_delay_ms(1000);
		PORTD = m1_led_off();
		_delay_ms(1000);
    }
}

