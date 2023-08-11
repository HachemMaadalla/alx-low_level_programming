#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
int x;
int y;
for (x = 0; x <= 9; x++)
{
putchar(x + '0');
for (y = 0; y < 9; y++)
{
putchar(',');
putchar(' ');
}
}

printf("\n");
return (0);
}
