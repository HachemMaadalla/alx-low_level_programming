#include <stdio.h>
#include "main.h"
/**
* puts2 - prints every other character of a string
* @str : char str
*/

void puts2(char *str)
{
int len = 0;
int i;
int j = 0;
while (str[j++])
{
len++;
}
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
_putchar('\n');
}
