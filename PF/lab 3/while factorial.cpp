#include<iostream>
using namespace std;
int main ()
{
	int num, fact=1,i;
	cout<<"enter any number=";
	cin>>num;
	i=num;
	while(i>=1)
	{
		fact*=i;
		i--;
		
	}
	if(num>1){
	
	cout<<"fact="<<fact;}
	else{
	
	cout<<"Error";}
}
