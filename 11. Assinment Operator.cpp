#include<iostream>
using namespace std;
int main()
{
	//first part
	int a,b;
	a=3,b=2;
	
	a+=b;
	cout<<a<<endl;
	
	a-=b;
	cout<<a<<endl;
	
	
	//second part
	int x=3;
	x+=2;
	cout<<"Assignment Plus: "<<x<<endl;
	
	x-=2;
	cout<<"Assignment Minous: "<<x<<endl;
	
	x*=2;
	cout<<"Assignment Multiplication: "<<x<<endl;
	
	x/=2;
	cout<<"Assignment Division: "<<x<<endl;
	
	x%=2;
	cout<<"Assignment Modulous: "<<x<<endl;
	
	return 0;
}
