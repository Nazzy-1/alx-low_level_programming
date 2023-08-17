#include <stdarg.h>

#include <stdio.h>

#include "variadic_functions.h"

/**
 * print_all - Prints anything based on the format.
 * @format: A list of types of arguments.
 * @...: The arguments to printed.
 *
 * Description: prints the provided arguments based on
 * format string. Supported formats: c (char),
 * i (integer), f (float), and s (char *). If the string
 * is NULL, it prints (nil).
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					i++;
					continue;
			}
			sep = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}

