#include "main.h"

/**
 * _strpbrk - Searches a string
 * @s: string
 * @accept: The set of bytes to be searched for.
 *
 * Return: a or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}

	return ('\0');
}
