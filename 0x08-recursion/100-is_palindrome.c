#include "main.h"

/**
 * _end - Finds the end of a string.
 * @s: The string whose end is to be found.
 *
 * Return: A pointer to the null terminator of the string.
 */
char *_end(char *s)
{
if (!*s)
return (s - 1);
return (_end(s + 1));
}

/**
 * _is_palindrome - if a segment of a string is a palindrome.
 * @start: Pointer to the start of the segment.
 * @end: Pointer to the end of the segment.
 *
 * Return: 1 if the segment is a palindrome, otherwise 0.
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
 * @s: The string to be checked.
 *
 * Return: 1 if the string is a palindrome, otherwise 0.
 */
int is_palindrome(char *s)
{
char *end = _end(s);
return (_is_palindrome(s, end));
}
