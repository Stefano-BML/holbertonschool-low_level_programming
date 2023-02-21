#include <stdio.h>

/**
 * main - double alphabet task
 * return: Always zero (Success)
 *
 */

int main(void)
{
        int i;

        for(i = 'a'; i <= 'z'; i++)
        {
                putchar(i);
        }
	for(i = 'A'; i <= 'Z'; i++)
        {
                putchar(i);
        }
        putchar('\n');

        return(0);
}
