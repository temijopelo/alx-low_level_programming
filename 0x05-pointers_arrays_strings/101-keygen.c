#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 11

/**
 * generateRandomChar - entry
 * Return: value
 */

char generateRandomChar(void)
{
	char charset[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";

	int maxIndex = sizeof(charset) - 1;

	int index = rand() % maxIndex;

	return (charset[index]);
}
