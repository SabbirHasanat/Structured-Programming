#include<stdio.h>
int main()
{
	int amt,ten,fifty,hundred;
	
	printf("Enter the amount to be withdraw: ");
	scanf("%d",&amt);
	
	ten=amt/10;
	fifty=amt/50;
	hundred=amt/100;
	
	printf("Ten notes= %d\nFifty notes= %d\nHundred notes= %d\n",ten,fifty,hundred);
	
	return 0;
}
