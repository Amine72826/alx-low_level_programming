#include "main.h"
#include <stdio.h>

/**
 * _isupper(int c) - Checks for uppercase character
 *
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return(1);
	}
	return (0);
}
