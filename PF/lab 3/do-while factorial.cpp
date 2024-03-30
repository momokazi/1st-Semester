#include<iostream>
using namespace std;
int main ()
{
	int num, fact=1,i;
	cout<<"enter any number=";
	cin>>num;
	i=num;
	do
	{
	fact*=i;
	i--;
	}
while(i>=1);
		
	cout<<"fact="<<fact;
}
