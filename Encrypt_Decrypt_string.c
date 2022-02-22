#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
void encrypt(char*ptr){
	while(*ptr!='\0'){
	*ptr=*ptr+2;
	*ptr++;
	}
}
void decrypt(char* ptr){
	while(*ptr!='\0'){
	*ptr=*ptr-2;
	*ptr++;
	}
}
int main()
{
 	char str[]="The subtle Art of Not Giving a FUCK!";
 	encrypt(str);
 	printf("Encrypted messege : %s\n",str);
 	char dtr[50];
// 	printf("Enter a messege to decrypt : ");
// 	gets(dtr);
// 	decrypt(dtr);
// 	printf("Decrypted Messege : %s\n",dtr);
 	

 return 0;
}



