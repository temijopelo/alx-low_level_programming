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
	if (argc < 1)
	{
		printf("no program file found\n");
	}
	else
	{
		printf("Program name: %s\n", argv[0]);
	}
	return (0);
}
