#include "main.h"

/**
 * _abs - function that computes the absolute value
 *
 * @c: the number checked
 *
 * Return: Absolute value of the number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int i;

		i = c * -1;
		return (i);
	}
	return (c);
}
