#include "main.h"

/**
 * *string_toupper - function
 *
 * @str: string
 *
 * Return: a pointer
 */


char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[index] -= 32;
		i++;
	}

	return (str);
}


