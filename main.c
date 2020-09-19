/*
 * ADC_Driver.c
 *
 * Created: 9/19/2020 9:04:40 PM
 * Author : monad
 */ 
#include <stdlib.h>
#define F_CPU 16000000UL
#include <util/delay.h>
#include "ADC.h"
#include "LCD.h"
int main(void)
{
	LCD_Init();
	ADC_Init();
    /* Replace with your application code */
	unsigned short temp=0;
	char array[16];
    while (1) 
    {
		temp=ADC_Read(1);
		temp /=4;
		itoa(temp,array,10);
		LCD_String(array);
		_delay_ms(800);
		LCD_CMD(0x01);
    }
}

