#include<stdio.h>
#include<math.h>
int main()
{
	int i,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		if(i==10)
		{
			continue;
		}
		printf("%d ",i);
	}
}
