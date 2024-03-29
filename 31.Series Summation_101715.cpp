#include<stdio.h>
#include<math.h>
int main()
{
	int a,i,n;
	float sum=0;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
{
	sum=sum+(1/(pow(i,i)));
}
printf("The Series Summation: %f\n",sum);
}
