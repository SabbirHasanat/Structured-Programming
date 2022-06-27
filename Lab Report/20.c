#include<stdio.h>
int main(){
    int n,i,c=0;
    printf("Enter any positive number: ");
    scanf("%d",&n);

    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            c++;
            break;
        }
    }

    if(c==0)
    {
        printf("Prime Number\n");
    }
    else
    {
        printf("Not Prime Number\n");
    }
    return 0;
}
