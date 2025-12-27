#include<iostream>
using namespace std;
int main()
{
	int account_balance , withdrawl_amount;
	cout<<"Enter your total account balance :"<<endl;
	cin>>account_balance;
	cout<<"Enter the amount that you want to withdraw :"<<endl;
	cin>>withdrawl_amount;
	if (withdrawl_amount<=account_balance)
	{
		cout<<"The remaining balance is : "<<account_balance-withdrawl_amount<<endl;
	}
	else
	{
		cout<<"Insufficient balance."<<endl;
	}
	return(0);
	
}
