#include<stdio.h>
int main(){
    int a[100][100],b[100][100],m,n,i,j,s[100][100];
    printf("Enter the first matrix's row & column:\n");
    scanf("%d%d",&m,&n);     //same size matrix

    printf("Enter the first matrix's elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("a[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix's elements:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("b[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Summed matrix:\n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            s[i][j] = a[i][j] + b[i][j];
            printf("%d\t",s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
