#include "main.h"
/**
 * is_prime_number - checks if a number is prime.
 * @n: int
 *
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
int div = 2; 
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
while (div <= n / 2)
{
	if (n % div == 0)
	return (0);
	div++;
}
return (1);
}
