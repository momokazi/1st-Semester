#include<iostream>
using namespace std;
int main()
{
    int n, a, b, c;
    cout<<"Enter a 3-digit number : ";
    cin>>n;
    a = n % 10;
    n = n / 10;
    b = n % 10;
    n = n / 10;
    c = n % 10;
    cout<<c<<endl<<b<<endl<<a<<endl;
    return 0;
}
