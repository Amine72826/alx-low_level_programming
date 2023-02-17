#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *return = Always 0 (success)
 */

int main(void)
{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	return (0);

	if(n > 0)
	{
		/* Check if n is positive*/
		printf("%d is positive", n);
	}
	else if(n == 0)
	{
		/* Check if n is equal to 0*/
		printf("%d is zero", n);
	}else if(n < 0)
	{
		/* Check if n is negative*/
		printf("%d is negative", n);
	}
}
