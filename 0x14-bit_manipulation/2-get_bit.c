#include "main.h"

/**
 * get_bit - The value of a bit at a given index.
 * @n: The number to extract bit from.
 * @index: The index of bit to be extracted.
 *
 * Return: The value of the bit at index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index >= (sizeof(unsigned long int) * 8)) /* Check if index is valid*/
return (-1);

return ((n >> index) & 1);
}

