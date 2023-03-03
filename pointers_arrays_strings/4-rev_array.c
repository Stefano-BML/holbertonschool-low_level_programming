#include "main.h"

/**
 * reverse_array - Write a function that reverses the content
 * @a: pointer
 * @n: string
 *
 * Return: Always zero
 */

void reverse_array(int *a, int n)
{
	int j;

	j = n - 1;

	while (j >= 0)
	{
		if (j != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[j]);
		j--;
	}
	printf("\n");
}
