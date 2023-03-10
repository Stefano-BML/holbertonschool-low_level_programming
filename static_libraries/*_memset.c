#include "main.h"
#include <stddef.h>

/**
 * *_memset - Fills the first n bytes of the memory area
 * @*s: A pointer
 * @b: The character
 * @n: The number
 *
 * Return: A pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;


	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
