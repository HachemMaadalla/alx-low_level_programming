#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
int x;
for (x = 0 ; x < 10 ; x++)
{
	printf("%d", x);
}
char y;
for (y = 'a'; y <= 'f'; y++)
	putchar(y);

putchar('\n');
return (0);
}
