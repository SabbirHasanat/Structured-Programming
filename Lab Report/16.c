#include<stdio.h>
int main(){
    int a[3][3],i,j;
    printf("Enter the elements:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Printing 3 by 3 matrix:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
