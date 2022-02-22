#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
//                      Display nth fibonacci number
int fib(int n){
	if(n==0){
		return 0;
	}
	else if (n==1){
		return 1;
	}
	else {
	return fib(n-1)+fib(n-2);
	
	}
}

int main()
{
	int n;
	printf("Enter the nth number (starting index 0) : ");
	scanf("%d",&n);
	printf("The fibonacci number at this index is : %d",fib(n));

 return 0;
}



