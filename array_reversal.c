#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void reverse(int *ptr,int n){
	int temp;
	for(int i =0 ; i<n/2;i++){
		temp=ptr[i];
		ptr[i]=ptr[n-i-1];
		ptr[n-i-1]=temp;
	}
}
int main()
{
	int n;
	printf("Enter the size of array : ");
	scanf("%d",&n);
	int arr[n];
	for(int i =0 ; i<n;i++)
	{
		printf("Enter the elemennt %d of array : ",i);
  		scanf("%d",&arr[i]);
	}
	reverse(arr,n);
	
	for(int i =0 ; i<n;i++)
	printf("After reversal of array %d element is : %d\n",i,arr[i]);
 
 return 0;
}



