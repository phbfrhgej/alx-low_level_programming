#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is the main function that does print _putchar as string
 *
 * Return: 0 (Success)
 */
int main(void)
{
/* full code here */
	char name[8] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		putchar(name[i]);
	}
	putchar('\n');
	/*return is 0 */
	return (0);
}
