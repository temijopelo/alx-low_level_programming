#include "main.h"

/**
 * puts_half - Prints the second half of a string followed by a new line.
 * @str: The string to be printed.
 */

void puts_half(char *str)
{
	int length = 0;
	int i;
	int start;

	while (str[length] != '\0')
{
	length++;
}

	start = (length - 1) / 2;

	for (i = start; i < length; i++)
{
	_putchar(str[i]);
}

	_putchar('\n');
}
