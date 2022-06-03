#include<stdio.h>
int main(){
	
	double pop=80000,men,women,t_lit,lit_men,lit_women,ilit_men,ilit_women;
	
	men=pop*.52;
	women=pop-men;
	t_lit=pop*.48;
	lit_men=pop*.35;
	ilit_men=men-lit_men;
	ilit_women=women-(t_lit-lit_men);
	
	printf("Illiterate Men = %.2lf\nIlliterate Women = %.2lf\n",ilit_men,ilit_women);
	
	return 0;
}
