#include<stdio.h>
#include<math.h>
int main()
{
	int reverse=0,n;
	printf("Enter The Number:\n");
	scanf("%d",&n);
	
	for(;n!=0;)
	{
		reverse=reverse*10;
		reverse=reverse+n%10;
		n=n/10;
	}
	printf("The reverse Number: %d\n",reverse);
}
	
	
