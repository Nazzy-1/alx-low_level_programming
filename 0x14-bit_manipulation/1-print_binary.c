#include "main.h"

/**
 * print_binary - equivalent of a decimal number that prints a binary
 * @n: the amount or number binary to be printed
 */

void print_binary(unsigned long int n)
{
int i, count = 0;
unsigned long int new;

for (i = 63; i >= 0; i--)
{
new = n >> i;
if (new & 1)
{
_putchar('1');
count++;
}
else if (new)
_putchar('0');
}
if (!new)
_putchar('0');
}

