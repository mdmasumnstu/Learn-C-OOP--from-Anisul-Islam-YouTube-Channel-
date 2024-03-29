#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,sum=0,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	do
	{
		sum=sum+i;
		i=i+2;
		
	}
	while(i<=n);
	printf("The Summation: %d\n",sum);
}
