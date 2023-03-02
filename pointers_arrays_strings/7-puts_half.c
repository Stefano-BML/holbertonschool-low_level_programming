#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * @str: input
 *
 * Return: half of print
 */

void puts_half(char *str)
{
	int medio, i;
	int len = 0;

	for (i = 0; str != '\0'; i++)
	{
		len++;
		str++;
	}
	medio = (len) / 2;
	for (i = 0; i < medio; i++)
	{
		str--;
	}
	for (i = 0; str != '\0'; i++)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
