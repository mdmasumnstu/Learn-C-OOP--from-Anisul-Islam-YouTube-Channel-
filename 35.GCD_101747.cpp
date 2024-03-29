#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf("Enter The Highest Number:\n");
	scanf("%d",&a);
	
	printf("Enter The Lowest Number:\n");
	scanf("%d",&b);
	
	do
	{
	  c=a%b;
	  a=b;
	  b=c;
	}
	while(a%b!=0);
	
	printf("\nGCD: %d\n",b);
}
