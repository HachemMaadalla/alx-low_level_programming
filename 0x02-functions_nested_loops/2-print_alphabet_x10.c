#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times , followed by a new line.
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
