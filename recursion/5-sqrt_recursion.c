#include "main.h"

/**
 * _sqrt_recursion - funtion that return the natural square
 * @n: the number to square
 *
 * Return: n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n <= 1)
	{
		return (n);
	}

	else
	{
		return (sqrt_n(n, 2));
	}
}

/**
 * sqrt_n - funtion auxiliar
 * @n: result of the funtion
 * @count: sqaure times
 *
 * Return: n
 */

int sqrt_n(int n, int count)
{
	if (count * count < n)
	{
		return (sqrt_n(n, count + 1));
	}

	else if (count * count == n)
	{
		return (count);
	}

	else
	{
		return (-1);
	}
}
