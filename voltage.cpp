#include <stdio.h>

int	main()
{
	int	num = 0;

	printf("enter a number");
	scanf("%d", &num);
	if (num < 30)
		printf("Low voltage\n");
	else if (num >= 30 && num <= 60)
		printf("medium voltage\n");
	else if (num >= 61 && num <= 100)
		printf("High voltage\n");
	return 0;
}
