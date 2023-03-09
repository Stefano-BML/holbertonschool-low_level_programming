#include "main.h"

/**
 * is_prime_number - prime check
 * @n: number of check
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
	return (0);
	}

	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - checker if the number is prime or not
 * @n: number of check
 * @i: counter
 *
 * Return: 0 or 1
 */

int is_prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}

	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}


