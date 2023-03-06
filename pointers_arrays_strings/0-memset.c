#include "main.h"

/**
 * _memset - Fills the first n bytes of the memory area
 * @s: A pointer
 * @c: The character
 * @n: The numbe
 *
 * Return: A pointer
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
