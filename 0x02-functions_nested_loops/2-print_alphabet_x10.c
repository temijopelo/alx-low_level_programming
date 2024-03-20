#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char i;
	int a = 0;

	while (a < 10)
	{
		for(i = 'a'; a < 'z'; a++)
		{
			_putchar(i);
			i++;
		}
	}
	_putchar('\n');
}
