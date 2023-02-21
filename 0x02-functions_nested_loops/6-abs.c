#include "main.h"

/**
 * _abs - returns the absolute value of an int
 *@n: number being tested
 * Return: Always absolute
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
