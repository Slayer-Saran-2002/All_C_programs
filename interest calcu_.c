#include<stdio.h>
int main()
{
	int i,y;
	double p;
	printf("Enter principal amount :");
	scanf("%d",&p);
	printf("Enter rate of intrest per month :");
	scanf("%d",&i);
	printf("Enter years : ");
	scanf("%d",&y);
	double am=(p*i/100)*y*12;
	printf("Interest payeble for %d years is : %d\n",y ,am);
	printf("Net amount payeble is : %d",p+am);
	return 0;
}
