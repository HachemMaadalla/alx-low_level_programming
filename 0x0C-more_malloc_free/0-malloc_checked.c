#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *memory = malloc(b);
if (memory == NULL)
exit(98);
return (memory);
}
