#include<stdio.h>
int main(){
    int a[100],n,i,j;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Even numbers: ");
    for(i=0; i<n; i++)
    {
        if( a[i]%2==0 )
            printf("%d ",a[i]);
    }
    printf("\nOdd numbers: ");
    for(i=0; i<n; i++)
    {
        if( a[i]%2!=0 )
            printf("%d ",a[i]);
    }
    return 0;
}
