#include<stdio.h>
int main(){
    int choice,i,f=1,n1,n2,c=0;
    printf("\nChoices are as below:\n");
    printf("1:Factorial\t");
    printf("2:Prime\t  ");
    printf("3:Odd\t   ");
    printf("4:Even\t");
    printf("5:Exit\n");
    printf("Enter You choice: ");
    scanf("%d",&choice);

    switch(choice){

    case 1:
        printf("Enter a number: ");
        scanf("%d",&n1);
        for(i=1; i<=n1; i++)
        {
            f=f*i;
        }
        printf("Factorial of %d is: %d",n1,f);
        break;

    case 2:
        printf("Enter any positive number: ");
        scanf("%d",&n2);
        for(i=2; i<n2; i++)
        {
            if(n2%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("Prime Number");
        }
        else
        {
            printf("Not Prime Number");
        }
        break;

    case 3:
        printf("Enter a number: ");
        scanf("%d",&n1);
        if(n1%2!=0)
        {
            printf("Odd Number\n");
        }
        else
        {

            printf("Not Odd Number\n");
        }
        break;

    case 4:
        printf("Enter a number: ");
        scanf("%d",&n1);
        if(n1%2==0){
            printf("Even Number\n");
        }
        else{
            printf("Not Even number\n");
        }
        break;

    default:
        printf("\nExit\n");
    }

    return 0;
}

