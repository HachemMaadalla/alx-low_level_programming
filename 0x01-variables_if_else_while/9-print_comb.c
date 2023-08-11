#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
putchar(',');
putchar(' ');
}
putchar(',');

printf("\n");
return (0);
}
