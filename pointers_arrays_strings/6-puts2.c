#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: imput
 *
 * Return: printer
 */

void puts2(char *str)
{
	int longer = 0;
	int i = 0;
	char *j = str;
	int k;

	while (*j != '\0')
	{
		j++;
		longer++;
	}
	i = longer - 1;
	for (k = 0; k <= i; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}
	_putchar('\n');
}
