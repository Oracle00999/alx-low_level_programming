#include "main.h"

/**
 * more_numbers - prints 10times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
