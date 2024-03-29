#include<stdio.h>
#include<math.h>
#include<conio.h>
int main()
{
	int n,m=0,i;
	printf("Enter the Number: \n");
	scanf("%d",&n);
	
	for(i=2;i<=n;i++)
	{
	  if(n%i==0)
	  {
	    m=1;
		break;	
	  }	
	}
	
	if(n==1)
	{
		printf("1 is prime or not");
	}
	else
	{
	
	if(m==0)
	{
		printf("%d is a Prime Number",n);
	}
	else
	{
		printf("%d is Nota Prime number",n);
	}
}
}
