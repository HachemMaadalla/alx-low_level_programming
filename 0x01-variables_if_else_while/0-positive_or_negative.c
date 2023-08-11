#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
* main - This is the entry point of the code
*
* Return: 0 Successful
*/
int main(void)
{
int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
if ( n > 0)
{
printf("%d is positive",n);
} else if ( n == 0 )
{
printf("%d is zero",n);
} else
{
printf("%d is negative",n);
}
return (0);
}
