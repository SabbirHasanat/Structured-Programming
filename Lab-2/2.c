#include<stdio.h>
int main(){
	
	int n;
	scanf("%d",&n);
	if(n%2==0){
		printf("Even Number\n");
	}
	else{
		printf("Odd Number\n");
	}
		
	return 0;
}

                    //Shortcut//                  
/*#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	(n%2==0)?printf("Even Number\n"):printf("Odd Number\n");
	return 0;
}*/
