#include <stddef.h>
#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an int.
 * @b: Pointer to string of 0 and 1.
 *
 * Return: The converted number.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;

if (b == NULL)
return (0);

while (*b)
{
if (*b != '0' && *b != '1')
return (0);

result = result * 2 + (*b - '0');
b++;
}

return (result);
}
