#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: the chacarter to be checked
 *
 * Return: 1 for character or 0 for anything
 */

int _isalpha(int c);
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
