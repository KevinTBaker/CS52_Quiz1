#include <stdio.h>
#include <iostream>
#include <cstdlib>
using namespace std;
int	main()
{
	int	num;
	int	abnum;

	printf("enter a number for absoluting\n");
	scanf("%d",&num);
	abnum = abs(num);
	printf("%d\n", abnum);
	return 0;
}
