#include "main.h"

/**
 * more_numbers - prints 10times the numbers from 0 to 14
 */
void more_numbers(void)
{
	int n;
	int i;

	i = 0;
	{
		while (i < 10)
		{
			n = 10;
			while (n < 25)
			{
				if (n >= 10)
				{
					_putchar(n / 10 + '0');
				}
				_putchar(n % 10 + '0');
				n++;
			}
			i++;
			_putchar('\n');
		}
	}
}
