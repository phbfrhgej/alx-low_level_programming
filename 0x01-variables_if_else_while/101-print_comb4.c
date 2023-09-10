#include <stdio.h>
/**
 * main-print combination of 3 numbers
 *
 * Return: always 0(success)
 */
int main(void)
{
int i;
int j;
int k;

for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
/*Convert the digits to characters and print them*/
putchar('0' + i);
putchar('0' + j);
putchar('0' + k);

/* Print ", " unless it's the last combination*/
if (i != 7 || j != 8 || k != 9)
{
putchar(',');
putchar(' ');
}}}}
putchar('\n');
return (0);
}

