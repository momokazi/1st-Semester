#include <iostream>
using namespace std;
int main ()
{
	char ch;
	cout<<"Enter any alphabet: ";
	cin>>ch;
	switch (ch)
	{
    case 'a':
	case 'e':		
	case 'i':
	case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':		
	case 'O':
	case 'U':
	
	cout<<"This is a vowel";
	break;			
	default:			
	cout<<"invalid character: ";
	}
	
	return 0;
}
