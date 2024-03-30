#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float area,s,a,b,c;
	cout<<"Enter a: ";
	cin>>a;
	cout<<"Enter b: ";
	cin>>b;
	cout<<"Enter c: ";
	cin>>c;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	cout<<area;
	return 0;	
}

