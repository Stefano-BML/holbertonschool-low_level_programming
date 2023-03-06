#include "main.h"

/**
 * leet - Enconde the number 1337.
 * @str: string
 *
 * Return: pointer
 */

char *leet(char *str)
{
	char *p = str;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "44330771";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = numbers[j];
				break;
			}
		}
	}
	return (p);
}
