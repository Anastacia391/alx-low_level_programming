#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers initialized to 0
 * @width: width of array
 *  @height: height of array
 * Return: a double pointer to the 2D array
 */
void free_grid(int **grid, int height)
{
		int i;

		if (grid == NULL || height <= 0)
			return;
		for (i = 0; i < height; i++)
			for (i = 0; i < height; i++)
				free(grid[i]);
		free(grid);
}		
