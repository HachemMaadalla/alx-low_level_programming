#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int _putchar(char c)
{
return putchar(c);
}

int print_alphabet(void)
{
char x;
for (int i=0; i < 10 ; i++)
{
for (x = 'a'; x <= 'z'; x++)
	_putchar(x);
_putchar('\n');
}
return (0);

}

int main(void)
{
print_alphabet();
return (0);
}
