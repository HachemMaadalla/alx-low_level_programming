#include <stdio.h>
#include "main.h"
/**
*swap_int - waps the values of two integers
*@a : integer 1
*@b : integer 2
*/
void swap_int(int *a, int *b)
{
int stocking;
stocking = *a;
*a = *b;
*b = stocking;
}
