#include<stdio.h>
#define pie 3.1416
int main(){
	
	float l,b,r,a_r,p_r,a_c,c_c;  //length=l, breadth=b, radius=r
	scanf("%f %f %f",&l,&b,&r);
	
	a_r=l*b;
	p_r=2*(l+b);
	a_c=pie*r*r;
	c_c=2*pie*r;
	
	printf("Area of rectangle=%.2f\nPerimeter of rectangle=%.2f\nArea of circle=%.2f\nCircumference of circle=%.2f\n",a_r,p_r,a_c,c_c);
	
	return 0;
}
