#include <iostream>
using namespace std;
int main ()
{
	float c,d,r,Pi=3.14;
	cout<<"Enter Radius: ";
	cin>>r;
	c=4*Pi*r*r;
	d=4/3*Pi*r*r*r;
	cout<<"Area: "<<c<<endl;
	cout<<"Volume: "<<d<<endl;
	return 0;
}
