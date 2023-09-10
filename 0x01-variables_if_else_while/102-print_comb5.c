#include <stdio.h>
/**
 * main-print combination of 2 numbers
 *
 * Return:always 0(success)
 */
int main(void)
{
int i;
int j;

for (i = 0; i <= 99; i++)
{
for (j = i; j <= 99; j++)
{
/* Print the first two-digit number*/
putchar('0' + (i / 10));
putchar('0' + (i % 10));

/* Print a space between the numbers*/
putchar(' ');
/* Print the second two-digit number*/
putchar('0' + (j / 10));
putchar('0' + (j % 10));

/* Print ", " unless it's the last combination*/
if (i != 99 || j != 98)
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}

