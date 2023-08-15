#include <stdio.h>
#include "main_h"
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
_putchar('\n');
return (0);
}
