#include<stdio.h>
int main(){
	
	int count=1,working_hour,overtime;
	float overtime_pay;
	
	while(count<=10){
		printf("Enter the working hours of employee no %d: ",count);
		scanf("%d",&working_hour);
		
		if(working_hour>40){
			overtime=working_hour-40;
			overtime_pay=overtime*12.00;
			
			printf("Employee no %d and overtime_pay is %.2f\n",count,overtime_pay);
		}
		else{
		printf("Need more work for overtime pay\n");
		}
		
		count++;
		
	}
	
	return 0;
}

