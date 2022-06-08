#include<stdio.h>
int main(){

    int num = 1, count;  
    float sum = 0.0, fact;  
  
    while(num <= 7){  
        fact = 1;  
        for(count = 1; count <= num; count++)  
        {  
            fact = fact * count;  //finding factorial
        }  
  
        sum = sum + (num / fact);   //for sum like series like [n/n! + m/m!+...]
  
        num++;  
    }  

    printf("Sum of series is %f\n", sum);  
    
    return 0;
}

