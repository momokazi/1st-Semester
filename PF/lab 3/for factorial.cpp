#include <iostream>
using namespace std;
int main()
{
	int num, x=1;
	cout<<"enter any number=";
	cin>>num;
	for(int i=num; i>1; i--)
	{
	x*=i;
	}
	cout<<"x ="<<x;
	
}
	
