#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int a ,b,c,d ,flag=0;
	printf("Enter the four numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if (a>b&&a>c&&a>d)
	   flag=a;
 else if (b>a&&b>c&&b>d)
 	  flag=b;
 else if (c>b&&c>a&&c>d)
 	  flag=c;
 else if (d>b&&d>c&&d>a)
 	  flag=d;
 	  printf("The greatest number is %d",flag);

 return 0;
}


