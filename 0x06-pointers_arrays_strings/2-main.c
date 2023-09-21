#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int i;
int j;
char s1[98];
char *ptr;
ptr = s1;


for (i = 0; i < 98 - 1; i++)
{
s1[i] = '*';
}
s1[i] = '\0';
printf("%s\n", s1);
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
printf("%s\n", s1);
printf("%s\n", ptr);
ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
printf("%s", s1);
printf("%s", ptr);
for (j = 0; j < 98; j++)
{
if (j % 10)
{
printf(" ");
}
if (!(j % 10) && j)
{
printf("\n");
}
printf("0x%02x", s1[j]);
}
printf("\n");
return (0);
}
