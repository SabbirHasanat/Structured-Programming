#include<stdio.h>
int main(){
	
	int row,i,j,c=2;   //output start from which number it depends on c
	scanf("%d",&row);
	
	for(i=1;i<=row;i++){
		for(j=1;j<=i;j++){
			printf("%d ",c);
			++c;
		}
		printf("\n");
	}
	
	return 0;
}
