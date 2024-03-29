#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **dem;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	dem = malloc(sizeof(int *) * height);

	if (dem == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		dem[x] = malloc(sizeof(int) * width);

		if (dem[x] == NULL)
		{
			for (; x >= 0; x--)
				free(dem[x]);

			free(dem);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			dem[x][y] = 0;
	}

	return (dem);
}
