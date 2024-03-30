#include <iostream>
using namespace std;
int main ()
{
	int num, rev = 0, Result;
	cout<<"Enter Number: ";
	cin>>num;
	while(num>0)
{
	Result = num % 10;
	rev = rev * 10 + Result;
	num = num / 10;
}
    cout<<"Reverse: "<<rev;
	return 0;
}
