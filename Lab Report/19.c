#include<stdio.h>
int main(){
    int i,n;
    float s=0;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    printf("%d terms Harmonic series: ",n);
    for(i=1;i<=n;i++)
    {
        printf("1/%d ",i);
        s+=1/(float)i;

        if(i<n){
            printf("+ ");
        }
    }
    printf("\nSum of %d terms harmonic series: %.2f\n",n,s);
    return 0;
}
