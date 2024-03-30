#include<iostream>
using namespace std;
int main()
{
    int A[10], i, num, index;
    cout<<"Enter 10 Numbers: ";
    for(i=0; i<10; i++)
        cin>>A[i];
    cout<<"Enter a Number to Search: "<<endl;
    cin>>num;
    for(i=0; i<10; i++)
    {
        if(A[i]==num)
        {
            index = i;
            break;
        }
    }
    cout<<"Found at Index No."<<index<<endl;
    cout<<endl;
    return 0;
}
