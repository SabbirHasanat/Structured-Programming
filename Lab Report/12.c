#include <stdio.h>
int main(){
   int a[100],p,v,i,n;
   printf("Enter the size of array: ");
   scanf("%d", &n);

   printf("Enter %d elements:\n",n);
   for(i = 0; i < n; i++)
      scanf("%d",&a[i]);

   printf("Enter the new value position: ");
   scanf("%d",&p);
   printf("Enter the value: ");
   scanf("%d",&v);

   for(i = n - 1; i >= p - 1; i--)
      a[i+1] = a[i];
      a[p-1] = v;

   printf("New array is: ");
   for(i = 0; i <= n; i++)
      printf("%d ", a[i]);

   return 0;
}
