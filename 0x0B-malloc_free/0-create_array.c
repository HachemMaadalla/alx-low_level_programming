#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: The size of the array
 * @c: specific char to intialize the array
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;
array = malloc(sizeof(char) * size);
if (array == NULL)
return (NULL);
for (i = 0; i < size; i++)
array[i] = c;
return (array);
}
