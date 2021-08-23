#include<iostream>
using namespace std;
int main()
{
	char ch;
    float n1, n2;
    cout<<"Enter two numbers: ";
    cin>>n1>>n2;
    do
    {
		cout<<"\nNumber 1: "<<n1<<"\tnumber 2: "<<n2;
		cout<<"\n\t\tOperator Menu";
		cout<<"\n\t1. Addition (+)";
		cout<<"\n\t2. Subtraction (-)";
		cout<<"\n\t3. Multiplication (*)";
		cout<<"\n\t4. Division (/)";
		cout<<"\n\t5. Exit (E)";
		cout<<"\nEnter opration number or oprator: ";
		cin>>ch;
		switch(ch)
		{
			case '1' :
			case '+' : cout<<n1<<" + "<<n2<<" = "<<n1+n2;
	        break;
	        case '2' :
			case '-' : cout<<n1<<" - "<<n2<<" = "<<n1-n2;
	        break;
	        case '3' :
			case '*' : cout<<n1<<" * "<<n2<<" = "<<n1*n2;
	        break;
	        case '4' :
			case '/' : cout<<n1<<" / "<<n2<<" = "<<n1/n2;
	        break;
	        case '5' :
	        case 'E' :
			case 'e' : cout<<"Thanku You for using the program";
	        break;
	        default  : cout<<"Invalid choice !!";
		}
	}
	while (ch!='5' && ch!='E' && ch!='e');
	return 0;
}
