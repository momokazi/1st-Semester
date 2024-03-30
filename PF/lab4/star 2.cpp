#include <iostream>
using namespace std;
int main()
{
	int i,b;
	for(i=20;i>=1;--i)
	{
		for(b=1;b<=i;b++)
		cout<<"*";
		cout<<endl;
	}
	cout<<endl;
    return 0;
}
