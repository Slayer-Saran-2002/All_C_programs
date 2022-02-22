#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

void slice(char *st ,int m ,int n){
	int i=0;
	while((i+m)<n){
		st[i]=st[i+m];
		i++;
	}
	st[i]='\0';
}
int main()
{
	char str[]="Saranjeet Mondal" ;
	slice(str,2,9);
	printf("After slicing : %s",str);
 return 0;
}



