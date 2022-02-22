#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//   Pointer concept call by reference 
void sumAndAvg (int x ,int y ,int *su,float *av)
{
	*su =x+y;
	*av= (float)(*su)/2;

}

int main()
{
int a=4,b=7,sum;
float avg;

sumAndAvg(a,b,&sum,&avg);

printf("The sum is %d ",sum);
printf("The avarage  is %.2f ",avg);
 return 0;
}



