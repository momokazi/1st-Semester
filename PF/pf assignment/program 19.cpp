#include<iostream>
using namespace std;
int main()
{
double theta,r,area;
cout<<"Enter length of radii and angle in radians between them: ";
cin>>r>>theta;
area=(r*r*theta)/2;
cout<<"The area of sector is"<<" "<<area;
return 0;

}
