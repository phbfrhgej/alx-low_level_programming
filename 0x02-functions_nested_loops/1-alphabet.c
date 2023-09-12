#include "main.h"
/**
 * print_alphabet - prints the lowercase alphabet from 'a' to 'z'
 *
 * Description: This function prints the lowercase alphabet in a
 * single line, starting from 'a' and ending with 'z', followed by a newline.
 */
void print_alphabet(void)
{
/* function to print a to z alphabet*/
char letters;

for  (letters = 'a'; letters <= 'z'; letters++)
{
_putchar(letters);
}
_putchar('\n');
}
