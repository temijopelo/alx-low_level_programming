#include "main.h"

/**
 * _puts - entry point
 * @str: The string to be printed
 * Return: 0
 *
 */

void _puts(char *str)
{
	for (*str = ' '; *str != '\0'; str++)
	{
		_putchar(*str);
	}

	_putchar('\n');
}
