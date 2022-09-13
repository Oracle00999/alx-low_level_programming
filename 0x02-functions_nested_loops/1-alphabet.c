#include <stdio.h>

/**
 * main - Entry point
 *
 * Descripion: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

void  print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
}
