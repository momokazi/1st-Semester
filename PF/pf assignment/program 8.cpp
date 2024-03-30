#include<iostream>
using namespace std;
int main()
{
    int totalPages, pagesReadPerDay, noOfDays, pagesRead, pagesRemaining;
    cout<<"Enter total pages of a book: ";
    cin>>totalPages;
    cout<<"Enter number of pages a person reads in one day: ";
    cin>>pagesReadPerDay;
    cout<<"Enter number of days a person has read the book: ";
    cin>>noOfDays;
    pagesRead = pagesReadPerDay * noOfDays;
    cout<<"Total number of pages read by the person: "<<pagesRead<<endl;
    pagesRemaining = totalPages - pagesRead;
    cout<<"Total number of pages remaining: "<<pagesRemaining<<endl;
    return 0;
}
