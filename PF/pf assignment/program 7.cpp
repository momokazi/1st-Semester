#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a, square, cube;
    cout<<"Enter a number: ";
    cin>>a;
    square = pow(a,2);
    cube = pow(a,3);
    cout<<"Square: "<<square<<endl;
    cout<<"Cube: "<<cube<<endl;
    return 0;
}
