#include <iostream>
#include <time.h>
using namespace std;
int main ()
{
	srand(time(NULL));
	int dice;
	while(dice<=6)
	{
	dice=rand()%6;
	cout<<dice<<endl;
	}
	return 0;
}
