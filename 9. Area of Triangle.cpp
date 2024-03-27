#include<iostream>
using namespace std;
int main()
{
	int base,height;
	float area;
	
	cout<<"Enter the base and height: "<<endl;
	cin>>base>>height;
	cout<<"Base: "<<base<<endl <<"Height: "<<height<<endl;
	area=0.5*base*height;
	
	cout<<"The area of triangle: "<<area;
	
	return 0;
}
