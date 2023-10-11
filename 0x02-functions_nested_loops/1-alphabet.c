#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int lowerAlphabets = 'a';

	while (lowerAlphabets <= 'z')
{
	_putchar(lowerAlphabets);
	lowerAlphabets++;
}
	_putchar('\n');
	return (0);
}
