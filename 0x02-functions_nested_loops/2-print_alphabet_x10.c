#include <stdio.h>
#include "main_h"
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int _putchar(char c)
{
return putchar(c);
}

int print_alphabet_x10(void)
{
for (int i=0; i < 10 ; i++)
{
print_alphabet();
}
return (0);

}

int main(void)
{
print_alphabet();
return (0);
}
