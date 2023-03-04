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
	int i = 1;

	while (*tmp != '\0')
	{
		if (*tmp == ' ' || *tmp == '\t' || *tmp == '\n' ||
			*tmp == ',' || *tmp == ';' || *tmp == '.' ||
			*tmp == '|' || *tmp == '?' || *tmp == '"' ||
			*tmp == '(' || *tmp == ')' || *tmp == '{' || *tmp == '}')
		{
			i = 1;
		}
		else
		{
			if (i == 1)
			{
				if (*tmp >= 'a' && *tmp <= 'z')
				{
					*tmp = *tmp - 32;
					i = 0;
				}
			}
		}
		tmp++;
	}

	return (str);
}

