#include<stdio.h>
#define pie 3.1416

int main(){
	
	double r,area,perimeter;
	scanf("%lf",&r);
	
	area=pie*r*r;
	perimeter=2*pie*r;
	
	if(area>perimeter){
		printf("Area is greatar than perimeter");
	}
	else
	{
		printf("Perimeter is greater than area");
	}
		
	return 0;
}
