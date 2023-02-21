#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * return: 1 if c is a letter, 0 otherwise
 */

int _isalphe(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
