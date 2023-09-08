#include <stdio.h>
/**
 * main-print alphabet capital and small
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
int i;

char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < 52; i++)
{
putchar(alpha[i]);
}
putchar('\n');
return (0);
}
