#include<stdio.h>
int main(){
	
	float b_s,d_a,h_r,g_s;
	scanf("%f",&b_s);
	
	d_a=b_s*0.4;
	h_r=b_s*0.2;
	g_s=b_s-d_a-h_r;
	printf("Gross Salary=%.2f\n",g_s);
	
	
	return 0;
}
