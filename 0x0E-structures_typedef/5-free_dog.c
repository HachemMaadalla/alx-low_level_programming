#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees dogs.
 * @d: The dog to be freed.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
return;
free(d->owner);
free(d->name);
free(d);
}
