#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: the time of the day
 */

void jack_bauer(void)
{
	int hor, hor1, min, min1;

	for (hor = 0; hor <= 2; hor++)
	{
		for (hor1 = 0; hor1 <= 9; hor1++)
		{
			if ((hor <= 1 && hor1 <= 9) || (hor <= 2 && hor1 <= 3))
			{
				for (min = 0; min <= 5; min++)
				{
					for (min1 = 0; min1 <= 9; min1++)
					{
						_putchar(hor + '0');
						_putchar(hor1 + '0');
						_putchar(':');
						_putchar(min + '0');
						_putchar(min1 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}



