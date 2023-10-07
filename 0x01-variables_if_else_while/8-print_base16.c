#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char hexDecimal = '0';
	char hexAlphabet = 'a';

	while (hexDecimal <= '9')
	{
		putchar(hexDecimal);
		hexDecimal++;
	}

	while (hexAlphabet <= 'f')
	{
		putchar(hexAlphabet);
		hexAlphabet++;
	}

	putchar('\n');
	return (0);
}
