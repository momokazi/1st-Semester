#include <iostream>
using namespace std;
int main ()
{
	int temp, A[6];
	for(int i=0;i<6;i++){
		cin>>A[i];
	}
	{
		temp=A[i];
		A[i]=A[i+1];
		A[i+1]=temp;
	}
	for(i=0;i<6;i++){
		cout<<A[i];
	}
	return 0;
}
