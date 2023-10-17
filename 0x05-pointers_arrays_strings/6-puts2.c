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
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	len -= 1;

	for (; i <= len; i += 2)
{
	_putchar(str[i]);
}
	_putchar('\n');
}
