#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main-function point
* more headers goes there
* Return: 0 (success)
*betty style doc for function main goes there
*/
int main(void)
/* main function for code */
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;


	if (n > 0)
	{
	printf("%d is positive", n);
	}
	else if (n < 0)
	{
	printf("%d is negative", n);
	}
	else
	{
	printf("%d is zero", n);
	}
	/* your code goes there */
	return (0);
}
