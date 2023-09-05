#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: Argument count
 * @av: Argument vector (array of strings)
 * Return: Pointer to the new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
int argIdx, charIdx, resultIdx = 0, totalLength = 0;
char *resultStr;
if (ac == 0 || av == NULL)
return (NULL);
for (argIdx = 0; argIdx < ac; argIdx++)
{
for (charIdx = 0; av[argIdx][charIdx]; charIdx++)
totalLength++;
}
totalLength += ac;
resultStr = malloc(sizeof(char) * totalLength + 1);
if (resultStr == NULL)
return (NULL);
for (argIdx = 0; argIdx < ac; argIdx++)
{
for (charIdx = 0; av[argIdx][charIdx]; charIdx++)
{
resultStr[resultIdx] = av[argIdx][charIdx];
resultIdx++;
}
if (resultStr[resultIdx] == '\0')
{
resultStr[resultIdx++] = '\n';
}
}
return (resultStr);
}
