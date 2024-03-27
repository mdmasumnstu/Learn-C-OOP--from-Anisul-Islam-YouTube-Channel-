#include<iostream>
using namespace std;
int main()
{
	int a,b,AND,OR,NOT,XOR;
	cout<<"Enter the two number: "<<endl;
	cin>>a>>b;
	cout<<"a: "<<a<<endl<<"b: "<<b<<endl;
	
	AND=a&b;
	cout<<"Bitwise AND: "<<AND<<endl;
	
	OR=a|b;
	cout<<"Bitwise OR: "<<OR<<endl;
	
	XOR=a^b;
	cout<<"Bitwise XOR: "<<XOR<<endl;
	
	NOT=~a;
	cout<<"Bitwise NOT: "<<NOT<<endl;
	return 0;
}
