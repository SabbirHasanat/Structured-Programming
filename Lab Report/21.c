#include<stdio.h>
int main(){
    int i,s=0;
    printf("Integer between 100 and 200 which are divisible by 9 are:\n");
    for(i=101;i<200;i++){
        if(i%9==0){
            printf("%d ",i);
            s+=i;
        }
    }
    printf("\nSum= %d\n",s);
    return 0;
}
