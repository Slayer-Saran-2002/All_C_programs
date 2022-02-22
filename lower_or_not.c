#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int ch;
	printf("Enter the charecter : ");
	scanf("%c",&ch);
	
	if (ch>='a'&& ch<='z')
	   	printf("The charecter is a lowercase");
	else
		printf("The charecter is not a lowercase");
	
 return 0;
}


