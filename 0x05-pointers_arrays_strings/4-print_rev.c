#include "main.h"

/**
 * print_rev - entry point
 * @s: string to be printed
 * Return: 0
 *
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
