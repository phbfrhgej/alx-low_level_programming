#include <stdio.h>
/**
 * main-print all numbers less than 100
 * Return: always 0(success)
 */

int main(void)
{
	int i;
	int j;

for (i = 0; i < 10; i++)
{
for (j = i + 1; j < 10; j++)
{
/* Convert the digits to characters and print them*/
putchar('0' + i);
putchar('0' + j);
/* Print ", " unless it's the last combination*/
if (i != 8 || j != 9)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

