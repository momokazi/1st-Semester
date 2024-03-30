#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    cout<<"Enter three numbers : ";
    cin>>a>>b>>c;
    d = a;
    a = b;
    b = c;
    c = d;
    cout<<"Values after swapping : ";
    cout<<a<<"\t"<<b<<"\t"<<c<<endl;
    return 0;
}
