#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - print diagonal line
 * @n: number of times to use \
 * Return: void
 */
void print_diagonal(int n)
{
	int i;
	int spc;

	for (i = 0; i < n; i++)
	{
		for (spc = 0; spc < 1; spc++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
