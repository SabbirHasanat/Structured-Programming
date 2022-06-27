#include<stdio.h>
int main(){
    int a[20],b[20],c[40],s1,s2,s3,i,j;
    printf("Enter the two same array size:\n");
    scanf("%d%d",&s1,&s2);
    s3=s1+s2;
    printf("Enter the first array elements:\n");
    for(i=0; i<s1; i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter the second array elements: \n");
    for(i=0; i<s2; i++)
    {
        scanf("%d",&b[i]);
        c[s1]=b[i];
        s1++;
    }
    printf("Merged array, c[%d]= ",s3);
    for(i=0; i<s3; i++)
    {
        printf("%d ",c[i]);
    }
    printf("\nDescending merged array: ");
    for(i=0; i<s3; i++)
    {
        for(j=i; j<s3; j++)
        {
            if( c[i]<c[j] )
            {
                int t=c[i];
                c[i]=c[j];
                c[j]=t;
            }
        }
    }
    for(i=0; i<s3; i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
