#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int occurence(char *ptr, char c){
	int count=0;
	while(*ptr!='\0'){
	if(*ptr==c){
		count++;
	}
	ptr++;
	}
	return count;
}
int main()
{
	char str[]="sarnjeet2002",c;
	printf("Occurence Of the charector is : %d",occurence(str,'e'));

 return 0;
}



