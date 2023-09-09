#include <stdio.h>
/**
 * main-print base 10 numbers
 *
 * Return: always 0 (success)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}
