#include<stdio.h>
int main(){
    int a[100],n,c=0,i,j;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Duplicate elements are: ");
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if( a[i]==a[j] ){
                printf("%d ",a[i]);
                c++;
                break;
            }
        }
    }
    printf("\nTotal duplicate element: %d\n",c);
    return 0;
}
