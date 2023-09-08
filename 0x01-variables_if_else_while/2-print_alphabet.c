#include <stdio.h>
/**
 * main-print alphabet
 *
 * Return: 0 (success)
 *
 */
int main(void)
{
int n;

char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

for (n = 0; n < 26; n++)
{
putchar(alpha[n]);
}
putchar('\n');
return (0);

}
