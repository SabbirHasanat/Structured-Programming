#include<stdio.h>
int main(){
	
	int num,a,b,c,d,n1,n2,n3,n4,sum;
	printf("Enter a 4 digit number: ");
	scanf("%d",&num);
	
	a=num/10;
	n4=num%10;
	b=a/10;
	n3=a%10;
	c=b/10;
	n2=b%10;
	d=c/10;
	n1=c%10;
	
	sum=n1+n4;
	
	printf("\nSummation of first & last digit: %d\n",sum);
	
	return 0;
}

