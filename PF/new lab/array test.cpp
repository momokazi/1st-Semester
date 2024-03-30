#include <iostream>
using namespace std;
int main ()
{
	int A[5],i;
	for(i=0;i<5;i++){
		cout<<"Enter an integer: ";
		cin>>A[i];
	}
	cout<<"The integers are: ";
	for(i=0;i<5;i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
