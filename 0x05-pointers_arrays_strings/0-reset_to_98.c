#include "main.h"

/**
 * reset_to_98 - entry point
 *
 * Return: 0
 */

void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int num;

	reset_to_98(&num);
	_putchar(num);

	return (0);
}
