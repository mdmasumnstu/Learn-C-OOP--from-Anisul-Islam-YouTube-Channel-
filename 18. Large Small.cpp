#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	cout<<"Enter the two number: "<<endl;
	cin>>num1>>num2;
	cout<<"num1: "<<num1<<endl<<"num2: "<<num2<<endl;
	
	if(num1>num2)
	{
		cout<<"Num1 is Large and Num2 is Small"<<endl;
	}
	else
	{
		cout<<"Num2 is Small and Num1 is Large"<<endl;
	}
	
	
	return 0;
}
