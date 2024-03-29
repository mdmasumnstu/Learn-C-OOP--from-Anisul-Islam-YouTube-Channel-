#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	float a,inch;
	printf("Enter the cm: \n");
	scanf("%f",&a);
	
	inch=a/2.54;
	
	printf("INCH: %.2f",inch);
}
