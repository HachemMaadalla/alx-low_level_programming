#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements.
 * @size: The byte size of each array element.
 * Return: NULL or pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *memory;
char *filler;
unsigned int i;
if (nmemb == 0 || size == 0)
return (NULL);
memory = malloc(size * nmemb);
if (memory == NULL)
return (NULL);
filler = memory;
for (i = 0; i < (size * nmemb); i++)
filler[i] = '\0';
return (memory);
}
