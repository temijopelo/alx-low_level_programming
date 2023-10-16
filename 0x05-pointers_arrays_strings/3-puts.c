#include "main.h"

/**
 * _puts - entry point
 * @str: The string to be printed
 * Return: 0
 *
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
