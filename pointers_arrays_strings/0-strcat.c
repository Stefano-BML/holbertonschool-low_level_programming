#include "main.h"

/**
 * *_strcat - Write a function that concatenates two strings
 * @dest: points string
 * @src: points string
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int i2 = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[i2] != '\0')
	{
		dest[i] = src[i2];
		i2++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
