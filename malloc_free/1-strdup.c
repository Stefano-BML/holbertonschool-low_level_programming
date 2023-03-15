#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - a function that returns a pointer
 * @str: pointer
 *
 * Return: NULL or pointer with new location
 */

char *_strdup(char *str)
{
	char *newstr;

	if (str == NULL)
	{
		return (NULL);
	}

	newstr = malloc(strlen(str) + 1);

	if (newstr == NULL)
	{
		return (NULL);
	}

	strcpy(newstr, str);

	return (newstr);
}

