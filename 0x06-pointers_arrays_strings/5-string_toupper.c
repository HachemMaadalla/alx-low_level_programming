#include <stdio.h>
#include "main.h"
/**
* string_toupper - changes all lowercase letters of a string to uppercase
* @n : char
* Return: n
*/

char *string_toupper(char *n)
{
while (*n)
{
if (*n >= 'a' && *n <= 'z')
{
*n -= 32;
}
n++;
}
return (n);
}
