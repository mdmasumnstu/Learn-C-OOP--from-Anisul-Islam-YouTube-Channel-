#include<stdio.h>
#include<math.h>
int main()
{
	int i=0,sum=0,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	while(i<=n)
	{
		sum=sum+i;
		i=i+10;
	}
	printf("The Summation: %d \n",sum);
}
