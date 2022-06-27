#include<stdio.h>
int main()
{
	int a[]={2,4,6,8};
	int b[]={1,3,5,7};
	int c[100],i;

	for(i=0;i<4;i++){
	 
	 c[i]=a[i];
	 c[i+4]=b[i];
	 
		}
	printf("Shorted Array: ");
	for(i=0;i<8;i++){	
		printf("%d ",c[i]);
	}
return 0;	
}
