#include <stdio.h>
/**
 * main-all the numbers of base 16 in lowercase, followed by a new line
 * using only putchar
 * Return: always 0(usccess)
 */
int main(void)
{
	int i;
	char base[16] = "0123456789abcdef";

	for (i = 0; i < 16; i++)
	{
		putchar(base[i]);
	}
	putchar('\n');
	return (0);
}
