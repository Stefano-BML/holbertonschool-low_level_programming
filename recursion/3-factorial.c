#include "main.h"

/**
 * factorial - funtion that return a factorial
 *
 * @n: string
 * Return: factorial number
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0 || n == 1)
	{
		return (1);
	}

	else
	{
	return (n * factorial(n - 1));
	}
}
