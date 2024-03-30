#include<iostream>
using namespace std;
int main()
{
    int ageInYears, ageInDays, ageInMonths;
    cout<<"Enter your age in years: ";
    cin>>ageInYears;
    ageInMonths = ageInYears*12;
    cout<<"Your age in months: "<<ageInMonths<<endl;
    ageInDays = ageInYears*365;
    cout<<"Your age in days :"<<ageInDays<<endl;
    return 0;
}
