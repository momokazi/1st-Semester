#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float p, r, t, ci;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter total time: ";
    cin>>t;
    ci=p*pow(1+(r/100),t);
    cout<<"Compound Interest: "<<ci<<endl;
    return 0;
}
