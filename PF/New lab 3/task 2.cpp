#include <iostream>
using namespace std;
int main()
{
	int A[2][4]={{15,21,9,84},{33,72,18,47}};
	int max,min,i,j;
	max=min=A[0][0];
	for(i=0;i<2;i++){
		for(j=0;j<4;j++){
			if(A[i][j]>max)
			max=A[i][j];
			if(A[i][j]<min)
			min=A[i][j];
		}
	}
	cout<<"Max= "<<max<<endl;
	cout<<"Min= "<<min<<endl;
}
