#include <stdio.h>
/**
 * main-prin alphabet except q and e
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int i;
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alpha[i]);
		}
	}
putchar('\n');
return (0);
}
