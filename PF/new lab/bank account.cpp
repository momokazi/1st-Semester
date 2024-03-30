#include <iostream>
using namespace std;
int main ()
{   
    int a, l, deposit, withdraw, previous_balance=50000, c, d, i=1;
    char response;
    cout<<"ENTER 4-DIGIT PIN: "<<endl;
    cin>>l;
    if(l>9999){cout<<"WRONG PIN"<<endl;}
    else{
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
		
		cout<<"|Amount of Ruppees "<<withdraw<<" has been withdrawn!"<<endl;}
		else{
			cout<<"Insufficient Funds! "<<endl;
			cout<<"Do you want to add more funds? "<<endl;
			cin>>response;
			if (response=='y'){
			cout<<"How much do you want to add? "<<endl;
			cin>>deposit;
			cout<<"Funds added successfully! "<<endl;
			cout<<"Updated balance: "<<previous_balance + deposit;	
			}
			else if(response=='n'){
			
				cout<<"Okay, have a good day! "<<endl;
			}
		}
			
		
		d=previous_balance-withdraw;
		if(withdraw<previous_balance){
		cout<<"|Updated balance: Ruppees "<<d<<endl;}
		break;
	case 3:
		cout<<"|Account Balance: Ruppees "<<previous_balance<<endl;
		break;
	}

}
}

