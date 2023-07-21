#include "main.h"

/**
 * more_numbers - print more numbers
 */

void more_numbers(void)
{
int i;

for (i = 0; i <= 9; i++)
{
if (i != 2 && i != 4)
{
_putchar(i + '0');
}
}

_putchar('\n');
}
