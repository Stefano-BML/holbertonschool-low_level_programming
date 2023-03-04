#include "main.h"

/**
 * *cap_string - Write a function that capitalizes all words of a string
 * @str: string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	char *tmp = str;

	int capitalize_next = 1;

	while (*tmp != '\0')
	{
		if (capitalize_next && (*tmp >= 'a' && *tmp <= 'z'))
		{
			*tmp = *tmp - 32;
		}
		if (*tmp == ' ' || *tmp == '\t' || *tmp == '\n' ||
			*tmp == ',' || *tmp == ';' || *tmp == '.' ||
			*tmp == '|' || *tmp == '?' || *tmp == '"' ||
			*tmp == '(' || *tmp == ')' || *tmp == '{' || *tmp == '}')
		{
			capitalize_next = 1;
		}
		else
		{
			capitalize_next = 0;
		}

		tmp++;
	}
	return (str);
}

