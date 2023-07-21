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
