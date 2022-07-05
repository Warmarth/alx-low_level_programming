#include "holberton.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */

void print_alphabet_x10(void)
{
int n, co;
co = 0;
while (co <= 9)
{
for (n = 'a'; n <= 'z'; n++)
{
_putchar(n);
}
co++
}
_putchar('\n');
}
