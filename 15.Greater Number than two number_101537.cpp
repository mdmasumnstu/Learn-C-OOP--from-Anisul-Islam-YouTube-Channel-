#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter the three Number: \n");
	scanf("%d %d %d",&a,&b,&c);
	
	if(a>b && a>c)
	{
		printf("Greater Number: %d\n",a);
	}
	else if(b>a && b>c)
	{
		printf("Greater Number: %d\n",b);
	}
	else
	{
		printf("Greater Number: %d\n",c);
	}
}
