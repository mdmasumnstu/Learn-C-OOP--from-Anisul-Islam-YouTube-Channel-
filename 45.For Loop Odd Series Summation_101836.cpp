 #include<stdio.h>
#include<math.h>
int main()
{
	int i,n,sum=0;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i=i+2)
	{
		sum=sum+i;
	}
	printf("The Summation: %d \n",sum);
}
