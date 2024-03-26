#include<iostream>
using namespace std;
int main()
{
	int a,b,sum,sub,multi,rem;
	float div;
	cout<<"Enter the two number: "<<endl;
	cin>>a>>b;
	cout<<"a: "<<a <<endl<<"b: "<<b<<endl;
	
	//addition
	sum=a+b;
	cout<<"The summation is: "<<sum<<endl;
	
	//substraction
	sub=a-b;
	cout<<"The substraction is: "<<sub<<endl;
	
	//multiplication
	multi=a*b;
	cout<<"The multiplication is: "<<multi<<endl;
	
	//division
	div=a/b;
	cout<<"The divided is: "<<div<<endl;
	
	//reminder
	rem=a%b;
	cout<<"The reminder is: "<<rem<<endl;
	return 0;
}
