#include <stdio.h>
/**
 * main-print combination of 2 numbers
 *
 * Return:always 0(success)
 */
int main(void)
{
/* my code is here*/
int i, j, k, l;

for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
for (k = 0; k < 10; k++)
{
for (l = 0; l < 10; l++)
{
int num1 = i * 10 + j;
int num2 = k * 10 + l;

if (num1 < num2)
{
putchar('0' + i);
putchar('0' + j);
putchar(' ');
putchar('0' + k);
putchar('0' + l);

if (i != 9 || j != 8 || k != 9 || l != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
}
}
putchar('\n');
return (0);
}



