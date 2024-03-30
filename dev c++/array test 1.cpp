#include<iostream>
using namespace std;
int main()
{
	int A[10]={4,6,9,12,15,17,19,18,22,69};
	for(int i=0;i<10;i++)
	{
		if(A[i]%2==0)
		cout<<A[i]<<" ";
	}
	return 0;
}

