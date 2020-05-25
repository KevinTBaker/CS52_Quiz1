#include <stdio.h>

int main()
{
	int number;
	int gfifty = 0;
	while (number != 0)
	{
		printf("enter a number\n");
		scanf("%d",&number);
		if (number > 50)
		{
			printf("greater than fifty\n");
			gfifty++;
		}
		else if (number == 50)
			printf("number is fifty\n");
		else
			printf("less than fifty\n");
	}
	printf("you guessed greater than fifty %d times\n", gfifty);
	return 0;
}
