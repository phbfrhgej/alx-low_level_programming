#include "main.h"
/**
* print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
* followed by a new line
*/
void print_alphabet_x10(void)
{
/*code here*/
char letters;
int i;

for (i = 0; i < 10; i++)
{
for (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
}
