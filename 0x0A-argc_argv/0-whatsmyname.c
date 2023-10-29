#include <stdio.h>

/**
 * main - entry point
 * @argc: The number of cammand-line
 * @argv: An array containing the command line arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
