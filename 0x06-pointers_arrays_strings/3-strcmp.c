#include <stdio.h>
#include "main.h"
/**
* _strncpy - copies a string.
* @s1 : char
* @s2 : char
* Return: return 0
*/

int _strcmp(char *s1, char *s2)
{
while (*s1 && (*s1 == *s2))
{
s1++;
s2++;
}
return (*s1 - *s2);
}
