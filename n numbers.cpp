#include <iostream>
using namespace std;
int main()
{
	int n=1,s=0,m;
	float a;
	cout<<" enter the number:";
	cin>>m;
	for( n=1; n<=m; n++)
	{
		s=s+n;
	}
    a=s/m;
	cout<<" the average of first "<<m<<" number is "<<a;
	return 0;
}
	
