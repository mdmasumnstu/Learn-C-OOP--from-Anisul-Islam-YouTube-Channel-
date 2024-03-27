#include<iostream>
using namespace std;
int main()
{
	float C,F,Celcious,Fahrenhite;
	
	//convert celcious to fahrenhite
	cout<<"1. Enter the celcious: "<<endl;
	cin>>C;
	cout<<"Celcious: "<<C<<endl;
	
	Fahrenhite= 1.8*C+32;
	cout<<"Celcious to Fahrenhite: "<<Fahrenhite<<endl<<endl;
	
	//convert fahrenhite to celcious
	cout<<"2. Enter the fahrenhite: "<<endl;
	cin>>F;
	cout<<"Fahrenhite: "<<F<<endl;
	
	Celcious=0.55*(F-32);
	cout<<"Fahrenhite to Celcious: "<<Celcious<<endl;
	
	
	return 0;
}
