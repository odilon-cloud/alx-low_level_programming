#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *print the value of n status:greater than, is zero and is not less than 6.
 *
 * return: Always 0 (Success)
 */

int main(void)
{
	int n, dig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*MY CODE*/
	dig = n % 10; /*gets last digit*/
	if (dig > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, dig);
	else if (dig == 0)
		printf("Last digit of %i is %i and is 0\n", n, dig);
	else if (dig < 6 && dig != 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, dig);

	return (0);
}
