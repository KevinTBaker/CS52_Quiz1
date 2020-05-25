#include <stdio.h>

int	main()
{
	int number;
	printf("enter a number\n");
	scanf("%d",&number);
	//printf("this was your number: %d", number);
	if (number > 50)
		printf("greater than fifty\n");
	else if (number == 50)
		printf("number is fifty\n");
	else
		printf("less than fifty\n");
	return 0;
}
