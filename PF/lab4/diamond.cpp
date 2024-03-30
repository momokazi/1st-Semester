#include <iostream>
using namespace std;
int main ()
{
	int a,b,num,space=1;
	cout<<"Enter number of rows: ";
	cin>>num;
	space=num-1;
	for(a=1;a<=num;++a)
	{
		for(b=1;b<=space;++b)
		{
		    cout<<" ";
		}
		space--;
		for(b=1;b<=2*a-1;++b)
		{
			cout<<"*";
		}
		cout<<endl;
	}
    space=1;
    for(a=1;a<=num-1;++a)
    {
    	for(b=1;b<=space;++b)
    	{
    		cout<<" ";
		}
		space++;
		for(b=1;b<=2*(num-a)-1;++b)
		{
			cout<<"*";
		}
		cout<<endl;
	}
		
	return 0;
}
