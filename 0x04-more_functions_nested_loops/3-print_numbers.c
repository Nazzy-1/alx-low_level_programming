#include "main.h"
#include <unistd.h> // Include this header for the write function

/**
 * _putchar - Writes a character to the standard output (stdout).
 * @c: The character to be written.
 *
 * Return: On success, returns the character written as an unsigned char
 *         cast to an int. On failure, it returns -1.
 */
int _putchar(char c)
{
return write(1, &c, 1);
}

/**
 * print_numbers - prints the numbers from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
int i;
for (i = 0; i <= 9; i++)
_putchar(i + '0');

_putchar('\n');
}
