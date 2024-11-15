#include <iostream>
using namespace std;

int main() 
{
    int a,b,lcm;
    cout<<"Enter A: "<<endl;
    cin>>a;

    cout<<"Enter B: "<<endl;
    cin>>b;
    
    cout<<"A: "<<a<<endl<<"B: "<<b<<endl;
    int gcd=1;
    for(int i=1;i<=a && i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    lcm= (a*b)/gcd;
    cout<<endl;
    cout<<"The GCD is: "<<gcd<<endl;
    cout<<"The LCM is: "<<lcm<<endl;

    return 0;
}
