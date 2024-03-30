#include <iostream>
#include<iomanip>
using namespace std;
int main ()
{   
    int a, deposit, withdraw, view, previous_balance=50000, c, d;
    int i=1;
    cout<<" *** MENU ***"<<endl;
	cout<<"|1. Deposit Amount"<<endl;
	cout<<"|2. Withdraw Amount"<<endl;
	cout<<"|3. View Account Balance"<<endl;
	while(i<=25){
    	i++;
    	cout<<"-";
	}
	cout<<endl;
	cin>>a;
	switch(a)
	{
	case 1:
		cout<<"|How much do you want to deposit? "<<endl;
		cin>>deposit;
		cout<<"|Amount Deposited! "<<endl;
		c=deposit+previous_balance;
		cout<<"|Updated balance = "<<c<<endl;
		break;
	case 2:
		cout<<"|How much do you want to withdraw? "<<endl;
		cin>>withdraw;
		if(withdraw<previous_balance){
		
		cout<<"|Amount of "<<withdraw<<" has been withdrawn!"<<endl;}
		else{
			cout<<"Insufficient Funds! ";
		}
		d=previous_balance-withdraw;
		if(withdraw<previous_balance){
		
		cout<<"|Updated balance = "<<d<<endl;}
		break;
	case 3:
		cout<<"|Account Balance: "<<previous_balance;
		break;
	}
	
}
