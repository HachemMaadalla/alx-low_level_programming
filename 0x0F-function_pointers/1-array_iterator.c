#include "function_pointers.h"
/**
 * array_iterator - main
 * @array: array.
 * @size: size of array.
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array == NULL || action == NULL)
return;
while (size-- > 0)
{
action(*array);
array++;
}
}
