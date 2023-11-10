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
	int numb;
	va_list arg;

	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		numb = va_arg(arg, int);
		printf("%d", numb);

	if ((i != n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(arg);
}
