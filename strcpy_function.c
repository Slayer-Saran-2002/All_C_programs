#include <stdio.h>
//char* strcpyy(const char *str1 ,char *str2)
//{	
////  char *ptr1=str1;
//// take a pointer pointing to the beginning of the destination string
//	char *ptr=str2;
////	int i=0;
//	while(*str1!='\0'){
//		*str2=*str1;
//		str1++;
//		str2++;
//		
//	}
//	*str2='\0';
//	return ptr;
//			
//}
////****NO return value easy way -->
void strcpyy(const char* str1 ,char *str2 ){
		while(*str1!='\0'){
		*str2=*str1;
		str1++;
		str2++;
	}
	*str2='\0';
}
int main()
{
	char st1[] ="hello saranjeet";
	char st2[30] ;
	int len;
	
	printf("%s\n",st1);
//	printf("%s",strcpyy(st1,st2)); 
	strcpyy(st1,st2);
	printf("%s\n",st2);

 return 0;
}

