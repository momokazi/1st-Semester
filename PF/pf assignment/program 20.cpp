#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    float n, logarithm;
    cout<<"Enter a value: ";
    cin>>n;
    logarithm=log10(n)/log10(2);
    cout<<"logarithm with base 2: "<<logarithm<<endl;
    return 0;
}

