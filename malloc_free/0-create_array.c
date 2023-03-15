#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * @size: dimensions
 * @c: characters
 *
 * Return: NULL or result of the array.
 */

char *create_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	buffer = malloc(sizeof(char) * size);

	if (buffer == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		buffer[i] = c;
	}

	return (buffer);
}
