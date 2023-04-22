
#include <avr/io.h>

#define F_CPU 8000000

#include <util/delay.h>

#include "STD_TYPES.h"

#include "BIT_MATH.h"


void main(void)
{
	DDRA= 0xff;
	while (1)
	{
				TOG_BIT (PORTA, 0);
				_delay_ms(500);
				TOG_BIT (PORTA, 1);
				_delay_ms(500);
				TOG_BIT (PORTA, 2);
				_delay_ms(500);
				TOG_BIT (PORTA, 3);
				_delay_ms(500);
				TOG_BIT (PORTA, 4);
				_delay_ms(500);
				TOG_BIT (PORTA, 5);
				_delay_ms(500);
				TOG_BIT (PORTA, 6);
				_delay_ms(500);
				TOG_BIT (PORTA, 7);
				_delay_ms(500);

	}

}
