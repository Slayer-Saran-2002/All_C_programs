#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int presence(char* ptr,char c){
	while(*ptr!='\0'){
	if(*ptr==c){
		return 1;
	}
	ptr++;
	}
	return 0;
}
int main()
{
	char str[]="The subtle Art of Not Giving a FUCK!",c;
	printf("Enter a charector to check present or not : \n");
	scanf("%c",&c);
	if(presence(str,c)== 1)
	printf("Yes Present\n");
	else
	printf("Not Present\n");

 return 0;
}



