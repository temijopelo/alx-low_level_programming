#include "main.h"

/**
 * puts2 - entry point
 *
 * @str: the string to be printed
 *
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[1]);
		i += 2;
	}
	_putchar('\n');
}
