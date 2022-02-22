#include <stdio.h>

//int strlenn(char str[]){
//	int len=0,i=0;
//	while(str[i]!='\0'){
//	len++;
//	i++;
//	}
//	return len;
//}

//using pointer --->
int strlenn(char *str){
	char *ptr=str;
	int len=0;
	while(*ptr!='\0'){
	len++;
	ptr++;
	}
	return len;
}

int main(){
	char st[100] ;
	printf("Enter a string : ");
	gets(st);
	printf("Length of the string is %d ",strlenn(st));
}
