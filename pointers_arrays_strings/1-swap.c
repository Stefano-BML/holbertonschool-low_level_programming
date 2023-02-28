#include "main.h"

/**
 * swap_int - Write a function that swaps the values
 *
 * @a: integer
 * @b: integer
 *
 * Return: a and b
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}

