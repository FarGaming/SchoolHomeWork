#include <iostream>
using namespace std;
int main()
{
	int i,j;
	char ch = '*';
	for(i=1;i<=5;++i)
	{
		cout<<"\n";
		for(j=1;j<=i;++j)
		cout<<ch;
	}
	return 0;
} 
