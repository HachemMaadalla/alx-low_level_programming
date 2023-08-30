#include "main.h"
int _is_palindrome(char *start, char *end);
char *_end(char *s);

/**
 * _end - Finds the end of a string.
 * @s: char
 *
 * Return: a pointer to the last character in the string.
 */
char *_end(char *s)
{
if (*s)
return (_end(s + 1));
return (s - 1);
}

/**
 * _is_palindrome - Checks if a string is a palindrome.
 * @start: The start pointer 
 * @end: The end pointer 
 *
 * Return: 1 or 0
 */
int _is_palindrome(char *start, char *end)
{
if (start >= end)
return (1);
if (*start != *end)
return (0);
return (_is_palindrome(start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: char
 *
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
char *end = _end(s);
return (_is_palindrome(s, end));
}
