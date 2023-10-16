#include "main.h"

/**
 * reset_to_98 - Updates the value a pointer points to 98.
 * @n: Pointer to an integer
 */

void reset_to_98(int *n)
{
	*n = 98;
}

/**
 *main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	reset_to_98(&num);

	return (0);
}
