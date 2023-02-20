#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	long int longintType;
	long long int doublelongintType;
	char charType;
	float floatType;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\u", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(doublelongintType));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(floatType));

	return (0);
}
