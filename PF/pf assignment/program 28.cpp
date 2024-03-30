#include<iostream>
using namespace std;
int main()
{
    int a, b, c, d, e, f;
    float percentage;
    cout<<"Enter marks of five subjects: ";
    cin>>a>>b>>c>>d>>e;
    f = a + b + c + d + e;
    cout<<"Total marks: "<<f<<endl;
    percentage = (f / 500.0) * 100.0;
    cout<<"Percentage: "<<percentage<<"%"<<endl;
    return 0;
}
