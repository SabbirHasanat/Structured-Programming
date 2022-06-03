#include<stdio.h>
int main(){
	
	double s_price,c_price,t_profit,one_item_c_price;
	scanf("%lf %lf",&s_price,&t_profit);
	
	c_price=s_price-t_profit;
	one_item_c_price=c_price/15;
	
	printf("Cost price of one item: %.2lf\n",one_item_c_price);
	
	return 0;
}
