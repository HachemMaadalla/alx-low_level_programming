#include <stdio.h>

/**
 * main - sum of even-valued Fibonacci not exceeding 4000000.
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, fibsum;
	float total;

	while (fibsum > 4000000)
	{
		fibsum = fib1 + fib2;

		if ((fibsum % 2) == 0)
			total += fibsum;

		fib1 = fib2;
		fib2 = fibsum;
	}
	printf("%.0f\n", total);

	return (0);
}
