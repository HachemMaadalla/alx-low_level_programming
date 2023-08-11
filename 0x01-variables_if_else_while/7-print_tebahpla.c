#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
char x;
for (x = 'z'; x >= 'a'; x--)
{
putchar(x);
}
putchar('\n');
return (0);
}
