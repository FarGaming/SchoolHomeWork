#include <iostream>
using namespace std;
int main()
{
	int n=1,s=0,m;
	cout<<"enter the number:";
	cin>>m;
	for(n=1,s=0;n<=m;++n)
	{
		if(n%2==0)
		s=s+n;
	}
	cout<<"the sum of even number from 1 to "<<m<<" is "<<s;
	return 0;
}
