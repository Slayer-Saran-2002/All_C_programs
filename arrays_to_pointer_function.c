#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void printArray(int ptr[],int n){
	for(int i=0 ; i<n ; i++)
		printf("The element %d of array is %d \n",i,ptr[i]);
		
		ptr[1]=55; //changes the value in main array;
}
//void printArray(int *ptr,int n){
//	for(int i=0 ; i<n ; i++)
//		printf("The element %d of array is %d \n",i,*(ptr+i));
//}

int main()
{
int arr[5]={15,12,14,10,2};
printArray(arr,5);
//printf("%d",arr[1]);
 return 0;
}



