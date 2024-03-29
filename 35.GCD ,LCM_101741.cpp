#include<stdio.h>
#include<math.h>
int main()
{
	int num1,num2,n1,n2,gcd,lcm,rem ;
	printf("Enter The Highest Number:\n");
	scanf("%d",&num1);
	
	printf("Enter The Lowest Number:\n");
	scanf("%d",&num2);
	
	n1=num1;
	n2=num2;
	
	while(n2!=0)
	{
		rem=n1%n2;
		n1=n2;
		n2=rem;
	}
	gcd=n1;
	lcm=(num1*num2)/gcd;
	
	printf("gcd: %d\n",gcd);
	printf("lcm: %d\n",lcm);
	
}
	
