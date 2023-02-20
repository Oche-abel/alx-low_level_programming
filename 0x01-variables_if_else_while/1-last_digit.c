#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - This program will assign a random number
 * Return:0
*/
int main(void)
{
	int n, lastd;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d is %d and its greater than 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is %d and its equal to 0\n", n, lastd);
	}
	else (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d is %d and its less than 6 and not 0\n", n, lastd);
	}
	return (0);
}
