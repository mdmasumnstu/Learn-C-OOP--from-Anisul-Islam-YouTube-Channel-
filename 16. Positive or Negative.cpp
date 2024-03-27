#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter the number: "<<endl;
	cin>>num;
	cout<<"num: "<<num<<endl;
	
	if(num>0)
	{
		cout<<"Positive"<<endl;
	}
	else if(num==0)
	{
		cout<<"Zero"<<endl;
	}
	else
	cout<<"Negative"<<endl;
	
	return 0;
}
