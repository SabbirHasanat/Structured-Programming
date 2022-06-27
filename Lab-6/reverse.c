#include<stdio.h>
int main(){
    int i,n,a[100];
    printf("Enter the size: ");
    scanf("%d",&n);

    printf("Enter the elements:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse order: ");
    for(i=n-1; i>=0; i--){
            printf("%d ",a[i]);
    }
    return 0;
}
