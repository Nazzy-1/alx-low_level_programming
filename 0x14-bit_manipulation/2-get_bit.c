#include "main.h"

/**
 * get_bit - it takes the value of a bit of index in a decimal number be return
 * @n: search for index or number or integer
 * @index: numbers of bit of index(s)
 * Return: The bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_values;

if (index > 63)
return (-1);
bit_values = (n >> index) & 1;
return (bit_values);
}

