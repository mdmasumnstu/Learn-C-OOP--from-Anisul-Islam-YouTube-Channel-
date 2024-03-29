#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the Score: \n");
	scanf("%d",&a);
	
	if((a>=80)&&(a<=100))
	{
		printf("The Grade: A+");
	}
	
	else if((a>=70)&&(a<=79))
	{
		printf("The Grade: A");
	}
	else if((a>=60)&&(a<=69))
	{
		printf("The Grade: A-");
	}
	else if((a>=50)&&(a<=59))
	{
		printf("The Grade: B");
	}
	else if((a>=40)&&(a<=49))
	{
		printf("The Grade: C");
	}
	else if((a>=33)&&(a<=39))
	{
		printf("The Grade: D");
	}
	else if((a>=33)&&(a<=39))
	{
		printf("The Grade: F");
	}
	else
	{
		printf("Not valid ");
	}
	
}
	
