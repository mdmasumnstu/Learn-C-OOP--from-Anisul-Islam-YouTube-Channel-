#include<iostream>
using namespace std;
int main()
{
	int a,i,ans;
	cout<<"Enter the number: "<<endl;
	cin>>a;
	cout<<"The number is: "<<a<<endl;
	
	for(i=1;i<=10;i++)
	{
	ans=a*i;
	cout<<a<<"*"<<i<<"="<<ans<<endl;	
	}


}
