#include<stdio.h>
int main(){

    int choice,n1,n2,n3,i,fact=1,count=0;
    printf("\n------------------------------------------------------");
    printf("\nChoices are as below\n");
    printf("1:Factorial\t");
    printf("2:Prime\t\t");
    printf("3:Odd/Even\t");
    printf("4:Exit\n");
    printf("Enter your choice ");
    scanf("%d",&choice);

    switch (choice){

    case 1:
        printf("Enter a number: ");
        scanf("%d",&n1);
        for(i=1;i<=n1;i++){

            fact=fact*i;
        }
        printf("\nFactorial of %d is: %d\n",n1,fact);
        break;

    case 2:
        printf("Enter any positive number: ");
        scanf("%d",&n2);
        for(i=2;i<n2;i++){
	      if(n2%i==0){
		     count++;
		     break;
            }
        }

        if(count==0){
            printf("\nPrime Number\n");
        }
        else{
            printf("\nNot prime Number\n");
        }

        break;


    case 3:
        printf("Enter any positive number: ");
        scanf("%d",&n3);
        if(n3%2==0){
            printf("\nEven Number\n");
        }
        else{
            printf("\nOdd number\n");
        }
        break;

    default:
        printf("\nExit\n");

    }

    return 0;
}
