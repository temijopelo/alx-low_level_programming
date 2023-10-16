#include "main.h"

/**
 * _strlen - entyr
 * count: int
 * @s: The string to be measured
 * Return: 0
 */

int _strlen(char *s)
{
	int count;

	for (count = 0; s[count] != '\0'; count++)
	{}

	return (count);
}
