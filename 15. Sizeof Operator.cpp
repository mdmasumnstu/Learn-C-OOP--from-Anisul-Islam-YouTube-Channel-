#include<iostream>
using namespace std;
int main()
{
	int b,c,d,e,f;
	int a;
	float g;
	char h;
	double k;
	char m[23];
	
	b=sizeof(a);
	cout<<"Size Integer: "<<b<<endl;
	
	c=sizeof(g);
	cout<<"Size float: "<<c<<endl;
	
	d=sizeof(h);
	cout<<"Size char: "<<d<<endl;
	
	e=sizeof(k);
	cout<<"size double: "<<e<<endl;
	
	f=sizeof(m);
	cout<<"Size array: "<<f<<endl;
	
	return 0;
}
