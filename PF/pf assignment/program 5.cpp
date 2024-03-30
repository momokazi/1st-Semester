#include<iostream>
using namespace std;
int main()
{
    float a, b, c, d, sum, product;
    float average;
    cout<<"Enter 4 numbers: ";
    cin>>a>>b>>c>>d;
    sum=a+b+c+d;
    average=sum/4.0;
    product=a*b*c*d;
    cout<<"Sum : "<<sum<<endl;
    cout<<"Average : "<<average<<endl;
    cout<<"Product : "<<product<<endl;
    return 0;
}
