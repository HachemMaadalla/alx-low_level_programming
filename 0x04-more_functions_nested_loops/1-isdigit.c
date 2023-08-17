#include "main.h"

/**
 * _isdigit - checks if c is digit
 * @c: number checked
 *
 * Return: 1 if the number is a digit, 0 otherwise.
 */
int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
