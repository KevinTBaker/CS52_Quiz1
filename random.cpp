#include <cstdlib>
#include <stdio.h>
#include <time.h>

int	main()
{
	int	num;
	srand(time(0)); 
	num = rand() % 200 + 100;
	printf("%d\n", num);
	return 0;
}
