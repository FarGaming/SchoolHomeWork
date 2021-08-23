#include <iostream>
using namespace std;
int main()
{
	int n=1,s=0,i=0,m,p;
	float a;
	cout<<" enter the number of student:";
	cin>>m;
	for(n=1,s=0;n<=m;++n)
	{
	 cout<<" enter the score of "<<n<<" student:";
	 cin>>p;
	 s=s+p;
	 i=i+1;
	}
	a=s/i;
	cout<<"the average score of "<<m<<" student is "<<a;
	return 0;
}
