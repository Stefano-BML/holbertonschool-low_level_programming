#include "main.h"
#include <stlib.h>

/**
 * array_range - function that creates an array of integers
 *
 * @min: minimum int
 * @max: maximum int
 *
 * Return: a;
 */

int *array_range(int min, int max)
{
	int *ptr, counter;

	if (min > max)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (max - min + 1));

	if (!ptr)
	{
		return (NULL);
	}

	for (counter = 0; counter <= max - min; counter++)
	{
		ptr[counter] = min + counter;
	}
	return (a);
}
