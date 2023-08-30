#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: natural square root
 */
int _sqrt_recursion(int n)
{
static int root = 0;
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return n;
if (root * root > n)
{
	root = 0;  // Reset for potential subsequent calls
	return (-1);
}
if (root * root == n)
{
	int temp = root;
	root = 0;
	return temp;
}
root++;
return _sqrt_recursion(n);
}
