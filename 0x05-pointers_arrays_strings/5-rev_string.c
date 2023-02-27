#include "main.h"

/**
 * rev_string- reverses a string
 * @s: the string to reverse
 * return: the reversed string
 */
void rev_string(char *s)
{
	int i, len, len1;
	char tmp;

	len = 0;
	len1 = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	len1 = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len1];
		s[len1--] = tmp;
	}
}
