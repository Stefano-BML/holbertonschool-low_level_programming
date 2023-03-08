#include "main.h"

/**
 * factorial - funtion that return a factorial
 *
 * @n: string
 * Return: factorial number
 */

int factorial(int n)
{
	if (n > 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
