#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	char ope;
	cout<<"enter a number= ";
	cin>>a;
	cout<<"enter a number= ";
	cin>>b;
	cout<<"enter operation(+ - * % /) "<<endl;
	cin>>ope;
	if(ope=='+')
	{
		c=a+b;
		cout<<c<<endl;
	}
	else if(ope=='-')
	{
		c=a-b;
		cout<<c<<endl;
	}
	else if (ope=='*')
	{
		c=a*b;
	cout<<c<<endl;
    }
    else if(ope=='/')
    {
    c=a/b;
    cout<<c<<endl;
    }
    else if(ope=='%')
    {
    c=a%b;
    cout<<c;
    }
	else cout<<"invalid input! ";
	
	return 0;
}
