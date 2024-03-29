#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int j,n,i;
	printf("Enter the Number: \n");
	scanf("%d",&n);
	
	for(i=n;i>=1;i--)
	{
	  for(j=1;j<=i;j++)	
	  {
	  	printf("%d ",j);
	  }
	  printf("\n");
	}
}
