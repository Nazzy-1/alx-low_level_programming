#include "main.h"

/**
 * flip_bits - checks the number of bits to be changed
 * from one number to others
 * @n: start num
 * @m: end num
 * Return: the number of bits to be changed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int j, count = 0;
unsigned long int previous;
unsigned long int ex = n ^ m;

for (j = 63; j >= 0; j--)
{
previous = ex >> j;
if (previous & 1)
count++;
}
return (count);
}

