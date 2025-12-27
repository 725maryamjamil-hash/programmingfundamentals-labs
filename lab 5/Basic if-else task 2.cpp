#include<iostream>
using namespace std;
int main()
{
	int salary , experience;
	cout<<"Enter your salary in $ :"<<endl;
	cin>>salary;
	cout<<"Enter your experience in years :"<<endl;
	cin>>experience;
	if (salary>=20000&&experience>5)
	{
		cout<<"You are eligible for loan."<<endl;
	}
	else
	{
		cout<<"You are not eligible for loan."<<endl;
	}
	return(0);
}
