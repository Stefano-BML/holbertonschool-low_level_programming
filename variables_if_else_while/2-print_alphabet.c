#include <stdio.h>

/**
 * main - alphabet task
 * return: Always zero (Success)
 *
 */

int main(void)
{
	int i;
	
	for(i = 'a'; i <= 'z'; i++)
	{
		if (i != 'e' && i != 'q')
		{
			putchar(i);
		}
	}

	putchar('\n');

	return(0);
}
