#include<stdio.h>
int main(){
	
	float dis,m,ft,in,cm;  //dis = distance = Km
	scanf("%f",&dis);
	
	m=dis*1000;
	ft=dis*3280.8399;
	in=dis*39370.079;
	cm=dis*100000;
	
	printf("Meter=%.2f\nFeet=%.2f\nInche=%.2f\nCentimeter=%.2f\n",m,ft,in,cm);
		
	return 0;
}
