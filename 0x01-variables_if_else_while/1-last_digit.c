#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Return: Always return 0
 */
/*checks if last digit of modulo is 5, less than 6 or equal to 0*/
int main(void)
{
	int n;
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = n % 10;
	lastn = n % 10;
	if (lastn > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, lastn
}

	else if (lastn == 0)

	{
		printf("last digit of %d is %d and is 0\n", n, lastn)
	}

	else

	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, lastn);
	}
	return (0);
}
