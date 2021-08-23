#include <iostream>
using namespace std;
int main()
{
	int s=0,i=0,n;
	float a;
	char ch;
	do
	{
		cout<<"enter the score of students:";
		cin>>n;
		s=s+n;
		i=i+1;
		cout<<"any more score to enter (y/n)?";
		cin>>ch;
	}
	while(ch=='Y'||ch=='y'); 
	a=s/i;
	cout<<"the average score of "<<i<<" student is "<<a;
	return 0;
}
