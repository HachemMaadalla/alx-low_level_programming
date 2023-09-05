#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * @width: width of the 2-dimensional array.
 * @height: height of the 2-dimensional array.
 * Return: NULL or pointer to the 2-dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
int **dd;
int h_index, w_index;
if (width <= 0 || height <= 0)
return (NULL);
dd = malloc(sizeof(int *) * height);
if (dd == NULL)
return (NULL);
for (h_index = 0; h_index < height; h_index++)
{
dd[h_index] = malloc(sizeof(int) * width);
if (dd[h_index] == NULL)
{
for (; h_index >= 0; h_index--)
free(dd[h_index]);
free(dd);
return (NULL);
}
}
for (h_index = 0; h_index < height; h_index++)
{
for (w_index = 0; w_index < width; w_index++)
dd[h_index][w_index] = 0;
}
return (dd);
}
