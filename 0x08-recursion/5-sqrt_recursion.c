#include "main.h"

/**
 * helper_sqrt - Auxiliary function to calculate natural square root.
 * @n: int
 * @root: int
 *
 * Return: natural square root or -1.
 */
int helper_sqrt(int n, int root)
{
if (root * root > n)
return (-1);
if (root * root == n)
return (root);
return (helper_sqrt(n, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: int
 *
 * Return: natural square root or -1.
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (helper_sqrt(n, 2));
}
