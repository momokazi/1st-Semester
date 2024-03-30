#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
  char f='*';
  cout<<setw(4);
  for(int i=1;i<=2;++i)
  {
  cout<<f;
  }
  cout<<setw(3)<<endl;
  for(int i=1;i<=4;++i)
  {
  cout<<f;
  }
  cout<<setw(2)<<endl;
  for(int i=1;i<=6;++i)
  {
  	cout<<f;
  }
   cout<<setw(1)<<endl;
   for(int i=1;i<=8;++i)
   {
   	cout<<f;
   }
   cout<<setw(2)<<endl;
   for(int i=1;i<=6;++i)
   {
   	cout<<f;
   }
   cout<<setw(3)<<endl;
   for(int i=1;i<=4;++i)
   {
   	cout<<f;
   }
   cout<<setw(4)<<endl;
   for(int i=1;i<=2;++i)
   {
   	cout<<f;
   }
   
  return 0;
   
}

