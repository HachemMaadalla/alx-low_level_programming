#include "main.h"

/**
 * check_divisor - recursively checks if n is divisible by any number up to n/2.
 * @n: int
 * @div: int
 *
 * Return: 0 or 1.
 */
int check_divisor(int n, int div)
{
if (div > n / 2)
return (1);
if (n % div == 0)
return (0);
return check_divisor(n, div + 1);
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: int
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
if (n <= 1)
return (0);
if (n == 2 || n == 3)
return (1);
return check_divisor(n, 2);
}
