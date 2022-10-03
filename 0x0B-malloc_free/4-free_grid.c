#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D grid
 * @grid: double pointer
 * @height: variable
 *
 * Return: Void
 */
void free_grind(int **grid, int height)
{
	if (grid != NULL && height  !=0)
	{
		for (; height >= 0; height--)
			free(grind[height]);
		free(grid);
	}
}
