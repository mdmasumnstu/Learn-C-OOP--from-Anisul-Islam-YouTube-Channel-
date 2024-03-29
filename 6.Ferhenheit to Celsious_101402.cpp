#include<stdio.h>
int main()
{
	int F;
	float temp;
	printf("Enter the temperature:\n");
	scanf("%d",&F);
	
	temp= 5*(F-32)/9;
	printf("Area of Triangle: %.2f",temp);
	
}
