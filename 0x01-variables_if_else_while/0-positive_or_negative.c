#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main -> assign any number to the variable n each time and excuted as the
 * Return: always 0
 * Based on the condition
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
				if (n == 0)
				printf("%d is zero\n", n);
					if (n < 0)
{
					printf("%d is negative\n, n);
}

retun (0);
}


