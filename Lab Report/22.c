#include <stdio.h>
int main(){
  int n,i;
  long int s=0,t=1;
  printf("Enter the number of terms: ");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
     printf("%ld ",t);
      if (i<n)
      {
          printf("+ ");

      }
     s=s+t;
     t=(t*10)+1;
  }
  printf("\nThe Sum is: %ld\n",s);
}
