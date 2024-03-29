#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the Year: \n");
	scanf("%d",&a);
	
	if((a%400==0)||(a%100!=0)&&(a%4==0))
	{
		printf("Leap year");
	}
	else
	{
		printf("Not Leap year");
	}
}
