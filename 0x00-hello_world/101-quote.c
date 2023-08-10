#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 1 Successful
*/
int main(void)
{
int i = 0;
char x[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
while (x[i] != '\0')
{
putchar(x[i]);
i++;
}
return (1);
}
