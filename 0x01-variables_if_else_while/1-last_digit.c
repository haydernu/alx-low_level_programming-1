#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of the number
 * number stored in the variable n
 * return always 0 (success)
 */
int main(void)
{

	int n;

	srand(time(0));
		n = rand() - RAND_MAX / 2;
	printf("last digit of %d is ", n);

	if (n > 5)

		printf("and is greater than 5\n");
	else if (n == 5)
		printf("and is 0\n");
	else if (n < 6 && n != 0)
		printf("and is less than 6 and not 0\n");

return (0);



}
