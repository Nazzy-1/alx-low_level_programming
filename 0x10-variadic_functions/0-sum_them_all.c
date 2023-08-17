#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Calculate the sum of all its parameters.
 * @n: The number of arguments.
 * @...: The variadic arguments.
 *
 * Return: The sum of all the arguments.
 */
int sum_them_all(const unsigned int n, ...)
{
   va_list ap;
	unsigned int i, sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

