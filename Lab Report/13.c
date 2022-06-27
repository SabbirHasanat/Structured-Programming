#include<stdio.h>
int main(){
    int p,n,a[100],i;
    printf("Enter the aray size: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position for delete an element: ");
    scanf("%d",&p);
    for(i=p;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("New array: ");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}
