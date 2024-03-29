#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=10;i<=n;i=i+10)
	{
		sum=sum+i;
	}
	printf("The Summation: %d \n",sum);
}
