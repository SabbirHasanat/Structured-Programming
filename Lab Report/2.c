#include<stdio.h>
int main(){
    int a[100],n,i,rev=0;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Printing reverse: \n");
    for(i=n-1; i>=0; --i)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
