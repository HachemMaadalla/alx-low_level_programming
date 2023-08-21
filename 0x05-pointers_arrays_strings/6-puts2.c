#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every other character of a string
* @str : char str
*/

void puts2(char *str)
{
int len = 0;
while (*str)
{
len++;
str++;
}
for (int i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
