#include<stdio.h>
int main(){

    char ch;
	int a,b,add,mul,sub,div;


    printf("Enter operation:");
	scanf("%c",&ch);


	printf("Enter the value of a & b: ");
	scanf("%d%d",&a,&b);

	switch(ch){

		case '+':
		   add=a+b;
		   printf("Ans:%d",add);
		   break;

		case '-':
		   sub=a-b;
		   printf("Ans:%d",sub);
		   break;

		case '*':
		   mul=a*b;
	       printf("Ans:%d",mul);
		   break;

		case '/':
		   div=a/b;
		   printf("Ans:%d",div);
		   break;


		default:
		   printf("No case");
	}

        return 0;
}

