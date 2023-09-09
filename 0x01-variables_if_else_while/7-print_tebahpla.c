#include <stdio.h>
/**
 * main-print reverse alphabet
 *
 * Return : always 0 (success)
 */
int main(void)
{
	int i;
	char alphab[26] = "zyxwvutsrqponmlkjihgfedcba";

	for (i = 0; i < 26; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
