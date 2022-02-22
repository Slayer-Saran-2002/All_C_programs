#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int posiCount(int *ptr,int n){
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(ptr[i]>0)
		flag++;
		else 
		continue;
	}
	return flag;
}

int main()
{
	int arr[]={1,-2,3,4,-5,6,7,-8,-9,10,-12,-89,65,22,45};
	printf("Total positive integers in the array : %d",posiCount(arr,15));
 return 0;
}



