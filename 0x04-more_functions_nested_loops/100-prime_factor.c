#include "main.h"
#include <math.h>

/**
 * main - Entry point
 *
 * Description: to print the largest prime factor of a number
 *
 * Return: 0 (success)
 */
int main(void)
{
	long i;
	long num = 612852475143;

	for (i = 2; i < num; i++)
	{
		if (num % i == 0)
			num /= i;
	}
	printf("%li\n", num);
	return (0);
}
