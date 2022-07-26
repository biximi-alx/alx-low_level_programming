#include "main.h"

/**
 * alloc_grid - alloctingn 2d array
 * @width: width of an array
 * @height: height of an array
 * Return: apointer to a allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **a;

	if (while <= 0 || height <= 0)
		return (NULL);
	a = malloc(height * sizeof9(int *));
	if (a == NULL)
		free(a);
		return (NULL);
	for (i = 0; i < height; i++)
	{
		a[i] = malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (j = i; j > 0; j--)
			{
				free(a[j]);
				free(a);
				return (NULL);
			}
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
			a[k][l] = 0;
	}
	return (a);

}
