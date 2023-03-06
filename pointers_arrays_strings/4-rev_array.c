#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Write a function that reverses the content
 * @a: pointer
 * @n: string
 *
 * Return: Always zero
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
