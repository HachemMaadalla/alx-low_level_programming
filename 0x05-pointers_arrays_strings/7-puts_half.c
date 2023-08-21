#include <stdio.h>
#include "main.h"
/**
* puts_half - prints half of a string
* @str : char str
*/

void puts_half(char *str)
{
int len = 0;
int i;
int j = 0;
while (str[j++])
{
len++;
}
int half;
if (len % 2 == 0)
{
half = len / 2;
} 
else 
{
half = (len - 1) / 2;
}
for (int i = half; i < length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
