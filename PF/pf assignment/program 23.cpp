#include<iostream>
using namespace std;
int main()
{
    int basicSalary, grossSalary;
    cout<<"Enter basic salary : ";
    cin>>basicSalary;
    float da, hr;
    da = basicSalary * (35.0/100.0);
    hr = basicSalary * (25.0/100.0);
    grossSalary = basicSalary + da + hr;
    cout<<"Gross Salary: "<<grossSalary<<endl;
    return 0;
}
