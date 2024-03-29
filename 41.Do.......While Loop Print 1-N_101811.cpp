#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,n;
	printf("Enter the Number:\n");
	scanf("%d",&n);
	
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=n);
}
