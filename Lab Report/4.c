#include<stdio.h>
int main(){
    int a[5]= {5,6,7,8,9},b[100],i;
    printf("a[5]= ");
    for(i=0; i<5; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nCopying all elements:\nb[5]= ");
    for(i=0; i<5; i++)
    {
        b[i]=a[i];
        printf("%d ",b[i]);
    }

    return 0;
}
