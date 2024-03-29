#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,i;
	printf("Enter the Number: \n");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",i);
		if(i==5)
		{
			break;
		}
	}
}
