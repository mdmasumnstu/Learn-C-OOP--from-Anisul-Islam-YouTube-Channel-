#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float a,cm;
	printf("Enter the Inch: \n");
	scanf("%f",&a);
	
	cm=a*2.54;
	
	printf("cm: %.2f",cm);
}
