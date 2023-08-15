#include <stdio.h>
#include "main.h"
/**
* main - This is the entry point of the code
*
*  print_alphabet - prints the alphabet in lowercase.
*
*/
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
_putchar('\n');
}
