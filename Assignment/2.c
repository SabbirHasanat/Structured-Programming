#include<stdio.h>
int main(){
	
	int i,sum=0;
	float avg;
	
	for(i=1;i<=10;i++){
		sum=sum+i;
	}
	
	avg=sum/10.0;
	
	printf("Summation= %d ",sum);
	printf("\nAverage= %.1f\n",avg);
	
	return 0;
}
