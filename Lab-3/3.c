#include<stdio.h>
int main(){
    int i,j,c;
    printf("The Prime numbers between 1 to 300:  ");
    
    for(i=1;i<=300;i++){
            c=0;
        for(j=1;j<=i;j++)
            if(i%j==0){
                c++;
            }
            if(c==2){
                printf("%d ",i);
            }
        }
        printf("\n");

        return 0;
}

