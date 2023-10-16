#include "main.h"

/**
 * print_rev - entry point
 * @s: string to be printed
 * Return: 0
 *
 */

void print_rev(char *s)
{
	for (int i = 0; s[i] != '\0'; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
