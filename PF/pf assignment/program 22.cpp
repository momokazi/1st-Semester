#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,sum;
    cout<<"Enter a five digit number: ";
    cin>>a;
    b=a%10;
    a=a/10;
    c=a%10;
    a=a/10;
    d=a%10;
    a=a/10;
    e=a%10;
    a=a/10;
    f=a%10;
    sum=b+c+d+e+f;
    cout<<sum;
    return 0;
}
    
