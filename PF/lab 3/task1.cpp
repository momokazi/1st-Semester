#include<iostream>
using namespace std;
int main ()
{
	int i, x=0;
	do{
		cout<<"enter no.";
		cin>>i;
		x=i-x;
		}
		while(i!=0);
		cout<<x;
}
