#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that prints the lowercase alphabet
 * in reverse order, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char alphab[26] = "zyxwvutsrqponmlkjihgfedcba";
/*your code here*/
	for (i = 0; i < 26; i++)
	{
		putchar(alphab[i]);
	}
	putchar('\n');
	return (0);
}
