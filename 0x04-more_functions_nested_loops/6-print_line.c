#include "main.h"
#include <stdio.h>

/**
 * print_line - draws a straight line 
 * @n: number of time the _ should be printed
 * return: void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
