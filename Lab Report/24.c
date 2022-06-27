#include<stdio.h>
int main(){
    int n,s,rev,a,b,c,d,e,f,d1,d2,d3,d4,d5,d6;
    printf("Enter a six digit number: ");
    scanf("%d",&n);
    a=n/10;
    d6=n%10;

    b=a/10;
    d5=a%10;

    c=b/10;
    d4=b%10;

    d=c/10;
    d3=c%10;

    e=d/10;
    d2=d%10;

    f=e/10;
    d1=e%10;

    s=d1+d2+d3+d4+d5+d6;
    printf("Reverse number= %d %d %d %d %d %d\nSum= %d\n",d6,d5,d4,d3,d2,d1,s);
    return 0;
}
