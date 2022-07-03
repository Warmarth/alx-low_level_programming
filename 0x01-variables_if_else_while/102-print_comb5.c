#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always return 0 (Success)
 */
int main(void)
{
int p, q;
for (p = 0; p <= 99; p++)
{
for (q = p + 1; q <= 99; q++)
{
if (p != q)
putchar((p / 10 + '48');
putchar((p % 10 + '48');
putchar(' ')
putchar((q / 10 + '48');
putchar((q % 10 + '48');
if (p * 100 + q != 9899)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
