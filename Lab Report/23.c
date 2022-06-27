#include<stdio.h>
int main(){
    int n,f=1,i;
    printf("Enter any positive number: ");
    scanf("%d",&n);
    for(i=2;i<=n;i++){
        f*=i;
    }
    printf("Factorial of %d is: %d\n",n,f);
    return 0;
}
