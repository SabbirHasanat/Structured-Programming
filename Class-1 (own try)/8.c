#include<stdio.h>
int main(){
	
	int num,a,b,c,d,e,n1,n2,n3,n4,n5,sum;
	printf("Enter the 5 digit number: ");
	scanf("%d",&num);
	
	a=num/10;
	n5=num%10;
	b=a/10;
	n4=a%10;
	c=b/10;
	n3=b%10;
	d=c/10;
	n2=c%10;
	e=d/10;
	n1=d%10;
	
	printf("Reverse Number : %d%d%d%d%d\n",n5,n4,n3,n2,n1);
	
	return 0;
}

