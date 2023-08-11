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
char x;
for (x = 'a'; x <= 'f'; x++)
	putchar(x);

putchar('\n');
return (0);
}
