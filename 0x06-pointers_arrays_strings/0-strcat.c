#include <stdio.h>
#include "main.h"
/**
* _strcat - concatenates two strings.
* @dest : char
* @src : char
* Return: return dest
*/

char *_strcat(char *dest, char *src)
{
i = 0; 
while (dest[i] != '\0') 
{
i++; 
}
j = 0;
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
