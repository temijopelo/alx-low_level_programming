#include "main.h"

/**
 * sqrt_recursive - entry point
 * @n: integer value
 * @guess: integer value
 * Return: 0
 */

int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
	return (guess);

	if (guess * guess > n)
	return (-1);

	return (sqrt_recursive(n, guess + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 * Return: 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	return (-1);

	if (n == 0 || n == 1)
	return (n);

	return (sqrt_recursive(n, 0));
}
