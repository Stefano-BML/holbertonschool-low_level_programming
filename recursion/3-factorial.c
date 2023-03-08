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
		_putchar("Error");
		return (-1);
	}

	if (n == 0)
	{
		return (1);
	}

	return (m * factorial(n - 1));
}
