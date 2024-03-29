#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a;
	printf("Enter the Roll Number: \n");
	scanf("%d",&a);
	
	if((a>=1)&&(a<=30))
	{
		printf("Roll: %d for The Group: A",a);
	}
	else if((a>=31)&&(a<=60))
	{
		printf("Roll: %d for The Group: B",a);
	}
	else if((a>=61)&&(a<=100))
	{
		printf("Roll: %d for The Group: C",a);
	}
	else
	{
		printf("Roll: %d for Invalid Group",a);
	}
}
	
	
	
	
