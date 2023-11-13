#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - entry point
 * @array: pointer to an int
 * @size: size of the array
 * @action: pointer to the function
 *
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (; i < size; i++)
	{
		action(array[i]);
	}
}
