#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int y;
	printf("Enter the year : ");
	scanf("%d",&y);

	if(y%4==0 && y%100!=0 && y%400!=0)
		printf("The year is a leap year (it has 366 days).\n");

	else
		printf("The year is not a leap year (it has 365 days).");
	return 0;
}


