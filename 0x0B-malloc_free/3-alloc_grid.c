#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
 */

int **alloc_grid(int width, int height)

{

	int **grid, onyekachi, azih;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (onyekachi = 0; onyekachi < height; onyekachi++)

	{

		grid[onyekachi] = malloc(width * sizeof(int));
		if (grid[onyekachi] == NULL)

		{

			while (onyekachi >= 0)

			{

				free(grid[onyekachi]);
				onyekachi--;

			}

			free(grid);
			return (NULL);

		}

		for (azih = 0; azih < width; azih++)
			grid[onyekachi][azih] = 0;

	}

	return (grid);
}

