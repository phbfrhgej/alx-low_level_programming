#include <stdio.h>
/**
 * main-print every single character
 *
 *Return: always 0(success)
 */
int main(void)
{
/* my code here*/

int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}

