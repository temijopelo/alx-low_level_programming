#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: pointer to int
 * @size: number of elements in the array
 * @cmp: pointer to the function
 *
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
