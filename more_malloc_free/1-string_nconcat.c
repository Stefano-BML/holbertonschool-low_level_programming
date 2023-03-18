#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: char
 * @s2: char
 * @n: int
 *
 * Return: pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0;
	unsigned int s2_len = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';

	return (result);
}
