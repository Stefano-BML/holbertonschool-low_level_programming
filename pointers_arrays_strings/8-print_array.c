#include "main.h"

/**
 * print_array - Write a function that prints n elements of an array
 * @n: number
 * @a: array name
 *
 * Return: a & n
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
			printf("\n");
}
