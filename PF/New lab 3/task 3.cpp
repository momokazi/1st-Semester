#include <iostream>
using namespace std;
int main()
{
	int c,A[2][4];
	int A2[2][4];
	int A3[2][4];
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<"Enter index element of 1st array: ";
			cin>>A[i][j];
		}
	}
			
	for(i=0;i<2;i++){
		for(j=0;j<4;j++)
		{
				cin>>A2[i][j];
		}
		
			
			
			for(i=0;i<2;i++){
		for(j=0;j<4;j++){
				A3[i][j]=A[i][j]+A2[i][j];
			
		cout<<A3[i][j]<<"\t";
			
			
}
}
}


