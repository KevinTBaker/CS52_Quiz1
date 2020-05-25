#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <math.h>

int	main()
{
	int	base;
	int	power;
	int	finalnum;

	printf("enter a base for powering\n");
	scanf("%d", &base);
	printf("what power would you like to raise your base\n");
	scanf("%d", &power);
	finalnum = pow(base, power);
	printf("%d raised to the power of: %d is: %d\n", base, power, finalnum);
}
