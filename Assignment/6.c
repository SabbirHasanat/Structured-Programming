#include<stdio.h>
int main(){
	
	int n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<=n;i+=2){
		printf("%d ",i);
		sum+=i;
	}
	printf("\nSummation of even numbers= %d\n",sum);
	
	return 0;
}
