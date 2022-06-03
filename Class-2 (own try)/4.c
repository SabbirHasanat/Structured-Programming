#include<stdio.h>
int main(){
	
	int Num, rev_Num = 0;
    printf("Enter the reverse  number: ");
    scanf("%d", &Num);    

    while (Num != 0){
        rev_Num = rev_Num * 10 + (Num % 10);
        Num = Num/10;
    }
    
    printf("The reverse number: %d\n", rev_Num);
    
    if(rev_Num==Num){
    	printf("Numbers are equal\n");	
	}
	else{
		printf("Numbers are not equal\n");
	}	
	return 0;
}
