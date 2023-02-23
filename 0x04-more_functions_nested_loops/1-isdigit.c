#include "main.h"
/**
 * _isdigit - checks for a digit between (0-9)
 * @c: integer holding the character
 *
 * Return: 1 if digit, 0 if not
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
