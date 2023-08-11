#include <stdio.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
char x[] = "abcdefghijklmnopqrstuvwxyz";
for (int i = 0; x[i] != '\0'; i++) {
        putchar(x[i]);
    }
return (0);
}
