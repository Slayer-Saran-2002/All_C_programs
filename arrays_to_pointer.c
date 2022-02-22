#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int arr[]={1,5,6,1,8,2,9};
	int *ptr;
//	ptr = &arr[0];
	ptr = arr;
	
	for(int i =0;i<7;i++){
	printf("The element %d of array is %d \n",i,*ptr);
	ptr++; // pointer arithmatic
	}

 return 0;
}



