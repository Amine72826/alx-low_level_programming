#include "main.h"

/**
 * get_bit - value of a bit at a given index
 * @n: decimal parameter
 * @index: index
 * Return: the value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value = (n >> index) & 1;

	return (bit_value);
}
