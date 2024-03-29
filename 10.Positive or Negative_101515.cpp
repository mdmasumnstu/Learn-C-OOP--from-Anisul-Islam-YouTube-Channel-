#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the Number: \n");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("Positive number\n");
	}
	if(a<0)
	{
		printf("Negative number\n");
	}
	if(a==0)
	{
		printf("Zero number\n");
	}
}
