#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//						Average of Three numbers 
float average();
int main()
{
int a,b,c;
printf("Enter Three numbers : \n");
scanf("%d%d%d",&a,&b,&c);
printf("Average of Three numbers : %f\n",average(a,b,c));
 return 0;
}
float average(int a,int b,int c){
	float result= (float)(a+b+c)/3;
	return result;
}



