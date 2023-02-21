#include <main.h>

/**
 * main - prints the striing _putchar followed by a new line.
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char line[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(line[c]);
	}
	_putchar('\n');
	return (0);
}
