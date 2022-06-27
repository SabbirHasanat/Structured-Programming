#include<stdio.h>
int main()
{
	int a[]={25,3,87,1,6};
	int i,j,temp;
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){

		if(a[i]<a[j]){

			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
}
	printf("\nDiscending Array: ");
	for(i=0;i<5;i++){
		printf("%d ",a[i]);
	}
	return 0;
}
