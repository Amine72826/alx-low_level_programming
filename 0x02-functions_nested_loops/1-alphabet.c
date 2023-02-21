#include "main.h"

/**
 *print_alphabet - it prints the alphabet in lower case
 *
 *Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char alph = 'a';

	while (alph <= 'z')
	{
		_putchar (alph);
		alph++;
	}
	_putchar('\n');
}
