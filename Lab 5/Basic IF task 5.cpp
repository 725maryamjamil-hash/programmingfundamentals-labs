#include<iostream>
using namespace std;
int main()
{
	char signal;
	cout<<"Enter the color of the traffic signal :"<<endl;
	cin>>signal;
	if (signal=='R'||signal=='r')
	{
		cout<<"Stop"<<endl;
	}
	if (signal=='Y'||signal=='y')
	{
		cout<<"Slow down"<<endl;
	}
	if (signal=='G'||signal=='g')
	{
		cout<<"Go"<<endl;
	}
	return(0);
}
