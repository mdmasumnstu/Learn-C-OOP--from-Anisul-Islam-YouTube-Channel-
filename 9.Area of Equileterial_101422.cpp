#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,area;
	printf("Enter the base: \n");
	scanf("%d",&a);
	
	area=(sqrt(3)*a*a)/4;
	
	printf("Area of Equileterial: %d",area);
}
