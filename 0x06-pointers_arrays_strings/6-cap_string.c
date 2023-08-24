#include <stdio.h>
#include "main.h"
/**
* cap_string - capitalizes all words of a string.
* @s : char
* Return: s
*/

char *cap_string(char *s)
{
int i = 0;
int check = 1;
while (s[i])
{
if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ',' || s[i] == ';' ||
s[i] == '.' || s[i] == '!' || s[i] == '?' || s[i] == '"' || s[i] == '(' ||
s[i] == ')' || s[i] == '{' || s[i] == '}')
{
check = 1;
} else if (check && s[i] >= 'a' && s[i] <= 'z')
{
s[i] -= 32;
check = 0;
} else 
{
check = 0;
}
i++;
}
return (s);
}
