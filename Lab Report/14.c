#include<stdio.h>
int main(){
    int a[100],n,i,j,t;
    printf("Enter the size: ");
    scanf("%d",&n);
    printf("Enter the elements: \n");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if( a[i] < a[j] ){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("Second largest element is: %d\n",a[1]);

    return 0;
}
