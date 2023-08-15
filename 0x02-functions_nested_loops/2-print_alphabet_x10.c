#include <stdio.h>
#include "main.h"
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
void print_alphabet_x10(void)
{
int x = 0;
char letter;
while (x++ <= 9)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
}
}
