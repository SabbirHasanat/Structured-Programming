#include<stdio.h>
int main(){
    int a[5],s=0,i;
    printf("Enter the elements: \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
        s+=a[i];
    }
    printf("Sum= %d\n",s);

    return 0;
}
