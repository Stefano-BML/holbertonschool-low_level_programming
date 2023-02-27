#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: character prints
 *
 * Return: void
 */

void print_triangle(int size)
{
int i;
int j;

if (size <= 0)
putchar('\n');
for (i = 0; i < size; i++)
{
for (j = size - i - 1; j > 0; j--)
putchar(' ');
for (j = i + 1; j > 0; j--)
putchar('#');
putchar('\n');
}
}
