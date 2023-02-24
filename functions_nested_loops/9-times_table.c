#include "main.h"

/**
 * times_table - function that prints the 9 times table
 *
 * Return: Empty output
 */

void times_table(void)
{
	int i, j, result, a, b;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;
			if (result > 9)
			{
				a = result % 10;
				b = (result - a) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(b + '0');
				_putchar(a + '0');
			}
			else
			{
			if (j != 0)
			{
				_putchar(44);
				_putchar(32);
				_putchar(32);
			}
				_putchar(result + '0');
			}
		}
		_putchar('\n');
	}
}
