#include<iostream>
using namespace std;
int main ()
{
	int marks;
	cout<<"Enter Marks";
	cin>>marks;
	if(marks>=80)
	cout<<"A* Grade";
	else if(marks>=75)
	cout<<"A Grade";
	else if(marks>=70)
	cout<<"B* Grade";
	else if(marks>=65)
	cout<<"B Grade";
	else if (marks>=50)
	cout<<"C Grade";
	else if (marks>=33)
	cout<<"E Grade";
	else
	cout<<"FAIL!";
	
}
