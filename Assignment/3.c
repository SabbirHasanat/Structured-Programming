#include<stdio.h>
int main(){
	
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i+=2){
		printf("%d ",i);
		sum=sum+i;
	}
	printf("\nSummation of odd numbers= %d\n",sum);
	
	return 0;
}
