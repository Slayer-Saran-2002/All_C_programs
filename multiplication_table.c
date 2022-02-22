#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Multiplication Table
int main()
{
	int num, l ,i=1;
	printf("Enter the number : \n");
	scanf("%d",&num);
		printf("Enter upto what number you want ? : \n");
		scanf("%d",&l);
	while(i<=l){
		printf("%d * %d = %d \n",num,i,num*i);
		i++;
	}
	
 return 0;
}



