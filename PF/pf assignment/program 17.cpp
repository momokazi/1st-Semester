#include<iostream>
using namespace std;
int main()
{
    float length, radius, angle;
    cout<<"Enter radius of arc : ";
    cin>>radius;
    cout<<"Enter angle of arc : ";
    cin>>angle;
    length = radius * angle;
    cout<<"Length of arc : "<<length<<endl;
    return 0;
}
