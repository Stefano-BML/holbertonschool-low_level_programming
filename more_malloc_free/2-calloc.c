#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array
 *
 * @nmemb: bites
 * @size: size array
 *
 * Return: *a
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);

	if (!a)
	{
		return (NULL);
	}

	for (counter = 0; counter < nmemb * size; counter++)
	{
		a[counter] = 0;
	}

	return ((void *) a);
}
