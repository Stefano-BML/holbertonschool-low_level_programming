#include "main.h"

/**
 * _pow_recursion - x and y values
 * @x: number
 * @y: the power
 *
 * Return: x and y values result
 */

int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	ans *= _pow_recursion(x, y - 1);

	return (ans);
}
