#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,sum=0,i;
	printf("Enter the Number: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i=i+1)
	{
		sum=sum+pow(i,i);
	}
	
	printf("%d\n",sum);
	
}
