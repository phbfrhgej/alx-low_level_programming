#include "main.h"
/**
* print_last_digit - prints the last digit of a number
* @i: the int to extract the last digit from
* Return: value of the last digit
*/
int print_last_digit(int i)
{
	int a;

	a = i % 10;
	if (a < 0)
	{
		a = -a;
	}
	else
	{
		a = a;
	}
	_putchar('0' + a);
	return (a);
}

