#include<stdio.h>
int main(){
    int n,i,s=0;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    printf("Odd numbers are: ");
    for(i=1;i<=((n*2)-1);i+=2){
        printf("%d ",i);
        s+=i;
    }
    printf("\nSum= %d\n",s);
    return 0;
}
