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

char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
char alph[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

for (i = 0; i < 26; i++)
{
putchar(alpha[i]);
putchar(alph[i]);
}
putchar('\n');
return (0);
}
