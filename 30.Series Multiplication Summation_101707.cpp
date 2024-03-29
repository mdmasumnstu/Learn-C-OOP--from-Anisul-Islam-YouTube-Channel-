#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		
		sum=sum+(i*(i+1));
	}
	printf("The Series Multiplication Summation: %d\n",sum);
}
