#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float x1, x2, y1, y2;
    float d;
    cout<<"Enter x, y coordinate for point 1: ";
    cin>>x1>>y1;
    cout<<"Enter x, y coordinate for point 2: ";
    cin>>x2>>y2;
    d = sqrt( pow(x2-x1,2) + pow(y2-y1,2) );
    cout<<"Distance is: "<<d;
    return 0;
}
