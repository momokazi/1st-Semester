#include <iostream>
using namespace std;
int main ()
{
	int num,a;
	cout<<"Please Enter: \n";
	cout<<"1. Enter saving account:\n ";
	cout<<"2. Enter joint account:\n";
	cout<<"3. Enter current account: \n";
	cin>>a;
	cout<<"Enter  Number: ";
	cin>>num;
	switch (a)
	{
		case 1:
	    a=num/100*10;
		break;
		case 2:
	    a=num/100*5;
		break;
		case 3:
		a=num/100*8;
		break;
	}
	cout<<a;
	
	return 0;
}
