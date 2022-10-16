#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-print if the number is positive,negative or 0
 * Return: 0-no error,non zero value if error.
*/
int main(void)
{
		int n;

		srand(time(0));
		n = rand() - RAND_MAX / 2;
		if (n > 0)
		{
			printf("%d is positive\n", n);
		}
		else if (n == 0)
			printf("%d is zero\n", n);
}
