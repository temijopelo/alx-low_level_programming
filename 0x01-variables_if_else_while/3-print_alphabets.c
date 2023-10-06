#include <stdio.h>

/**
 * main - entry point
 *
 * Result: 0
 *
 */

int main(void)
{
	char lowerAlphabets = 'a';
	char upperAlphabets = 'A';

	while (lowerAlphabets <= 'z')
	{
		putchar(lowerAlphabets);
		lowerAlphabets++;
	}
	while (upperAlphabets <= 'Z')
	{
		putchar(upperAlphabets);
		upperAlphabets++;
	}

	putchar('\n');
	return (0);
}
