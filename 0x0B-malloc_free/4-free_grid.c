#include "main.h"
#include <stdio.h>

/**
 *free_grid - free up a 2d grid
 *Description: Print out a 2D array
 *@grid: double pinter 2d grid
 *@height: height of the grid
 */

void free_grid(int **grid, int height)
{

	int a;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
