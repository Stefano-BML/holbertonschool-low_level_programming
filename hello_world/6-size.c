#include <stdio.h>

/**
 * main - Emtry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longintType;
	long long int doublelongintType;
	char charType;

	// sizeof evaluates the size of a variable
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\u", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(longintType));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(doublelongintType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));
	
	returno (0);
}
