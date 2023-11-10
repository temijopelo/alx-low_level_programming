#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_number - entry point
 * @separator: char
 * @n: integer
 * @...: other parameters
 * Return: 0
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
