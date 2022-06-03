#include<stdio.h>
int main(){
	
	int m1,m2,m3,m4,m5,aggregate;
	float percentage;
	scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
	
	aggregate=m1+m2+m3+m4+m5;
	percentage=aggregate*(100.00/500.00);
	
	printf("Aggregate marks=%d\nPercentage marks=%.2f\n",aggregate,percentage);
	
	return 0;
}
