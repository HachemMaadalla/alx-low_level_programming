#include <stdio.h>
#include "main.h"
/**
* _strlen - returns the length of a string
* @s : char s
* Return: s
*/

int _strlen(char *s)
{
int len = 0;
while (*s)
{
len++;
s++;
}
return (len);
}
