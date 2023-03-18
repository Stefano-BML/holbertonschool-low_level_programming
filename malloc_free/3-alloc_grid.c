#include "main.h"
#include <stlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 *
 * @width: width input
 * @height: height input
 *
 * Return: pointer 2 dimensional
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	int **grid = malloc(height * sizeof(int *));

	if (grid == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			for (int j = 0; j < i; j++)
			{
				free(grid[j]);
			}
			free(grid);

			return (NULL);
		}

		for (int j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}

	return (grid);
}
