#include "main.h"

/**
 * print_sign - function that prints the sign
 *
 * @n: number checked
 *
 * Return: 1 for positive or -1 for negative or zero for else
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		 _putchar(45);
                return (-1);
	}
	else
	{
		 _putchar(48);
                return (0);
	}
}

