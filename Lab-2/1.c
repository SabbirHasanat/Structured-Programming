#include<stdio.h>
int main(){
	
	double cost,sell,profit,loss;
	scanf("%lf%lf",&cost,&sell);
	
	if(sell>cost){
		profit=sell-cost;
		printf("Profit= %.2lf\n",profit);
	}
	else{
		loss=cost-sell;
		printf("Loss= %.2lf\n",loss);
		}
		
	return 0;
}
