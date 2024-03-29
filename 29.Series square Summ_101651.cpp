#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n,sum=0;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		sum=sum+pow(i,i);
	}
	printf("The Summation of Series: %d\n",sum);
	
}
