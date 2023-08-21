#include <stdio.h>
#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s : char s
*/

void print_rev(char *s)
{
int len;
len = _strlen(s);
for (int i = len - 1; i >= 0; i--) 
{
_putchar(s[i]);
}
_putchar('\n');
}
