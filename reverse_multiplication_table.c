#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//Multiplication Table
int main()
{
	int num, l ;
	printf("Enter the number : \n");
	scanf("%d",&num);
		printf("Enter upto what number you want ? : \n");
		scanf("%d",&l);
	int i=l;
	while(i>0){
		printf("%d * %d = %d \n",num,i,num*i);
		i--;
	}
	
 return 0;
}



