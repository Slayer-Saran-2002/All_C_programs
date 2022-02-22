#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str1[30],str2[30],c;
	int i=0; 
	printf("Enter first string : \n");
//	getting string using %s
	scanf("%s",str1);
	printf("Enter second string : \n");
//	scanf("%s",str2);
//	getting string using %c
	while(c!='\n'){
		fflush(stdin);
		scanf("%c",&c);
		str2[i]=c;
		i++;
	}
	str2[i-1]='\0'; // last charector of string should be null charector;
	
	printf("The strings are %s and %s\n",str1,str2);
//	Comparing strings
	if(strcmp(str1,str2)==0)
	printf("Both strings are same");
	else
	printf("strings are not same");

 return 0;
}



