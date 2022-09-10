#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'to print the lowercase alphabet in reverse'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int ch;

	for (a = 48; a < 58; a++)
	{
		putchar(a);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(a);
	}

	putchar('\n');
	return (0);
}
