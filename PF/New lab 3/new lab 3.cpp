#include<iostream>
using namespace std;

struct birth
{
	int date,*i, year; char month;
};

int main()
{	
	birth a;
	cout<<"Enter Date: ";
	cin>>a.date;
	a.i=&(a.date);
	cout<<"Enter Month: ";
	cin>>a.month;
	cout<<"Enter year: ";
	cin>>a.year;
	
	cout<<"Date of Birth is "<< *a.i <<"/"<< a.month <<"/"<<a.year<<endl;
	return 0;
}
