#include "main.h"

/**
 * print_rev - entry point
 * @s: string to be printed
 * Return: 0
 *
 */

void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		length--;
		_putchar(s[length]);
	}
	_putchar('\n');
}
