#include<iostream>
using namespace std;
int main()
{
    float volume, length, width, height;
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter width : ";
    cin>>width;
    cout<<"Enter height : ";
    cin>>height;
    volume = length * width * height;
    cout<<"Volume : "<<volume<<endl;
    return 0;
}
