#include<iostream>
using namespace std;
int main()
{
    int i, A[10], num, first=0, last=9, mid;
    cout<<"Enter 10 Elements (in ascending order): ";
    for(i=0; i<10; i++)
        cin>>A[i];
    cout<<"Enter Element to be Searched: "<<endl;
    cin>>num;
    mid = (first+last)/2;
    while(first<=last){
	
    if(A[mid]<num)
    {
		cout<<"The number "<<num<<" found at index "<<A[mid]-1;
		break;
	 }
    first=mid+1;
    else if
	{
		cout<<"The number "<<num<<" found at index "<<A[mid]-1;
		break;
	 } 
	
	
	else
	last=mid-1;
	mid=(first+last)/2;
}
	
	if(first>last)
	{
	cout<<"The number "<<num<< " is not found "<<endl;
    
    }
}

	
		
    

