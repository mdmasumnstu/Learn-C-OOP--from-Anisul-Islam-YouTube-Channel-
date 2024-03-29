#include<stdio.h>
int main()
{
	int b,h;
	float ar;
	printf("Enter the base and height:\n");
	scanf("%d %d",&b,&h);
	
	ar=0.5*b*h;
	printf("Area of Triangle: %.2f",ar);
	
}
