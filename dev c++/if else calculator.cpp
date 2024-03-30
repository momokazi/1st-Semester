#include <iostream>

using namespace std;

int main()
{
    int a,b,c; 
	char ope;
    cout<<"enter a value" << endl;
    cin >> a;
    cout<<"enter b value" <<endl;
    cin >> b;
    cout<<"enter operation (+ - * / and %)";
    cin>> ope;
    if (ope == '+')
    {
        c=a+b;
        cout<< c<<endl;
        
    }
    if (ope == '-')
     {
        c=a-b;
        cout<< c<<endl;
     }
      else if (ope == '*')
      {
          c=a*b;
      cout<< c<<endl;
      }
      else if (ope == '/')
      {
       c= a/b;
       cout<< c<<endl;
      }
      else if (ope == '%')
      {
        c=a%b;
        cout<< c;

      }
    else cout<<" ";
    return 0;
}

