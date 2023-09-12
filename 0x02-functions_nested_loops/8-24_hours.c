#include "main.h"
/**
 *jack_bauer-to print hour
 *starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
	int i;
	int j;

	for (j = 0; j < 24; j++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar('0' + (j / 10));
			_putchar('0' + (j % 10));
			_putchar(':');
			_putchar('0' + (i / 10));
			_putchar('0' + (i % 10));
			_putchar('\n');
		}
	}
}
