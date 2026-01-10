#include<iostream>
#include<string>
using namespace std;
int main()
{
	int account_balance;
	bool loyality;
	cout << "\nEnter your account balance : $";
	cin >> account_balance;
	cout << "\nAre you loyal (1 for yes, 0 for no)" << endl;
	cin >> loyality;
	
	//ternary operator for account type
	string account_type=(account_balance<100)?"Low Balance Account":
		(account_balance<=500)?"Standard Account":"Pramium Account";
	
	cout << account_type << endl;
	
	//ternary operator for loan eligibility
	string loan_eligibility=(account_balance>=200&&loyality==1)?"Loan Eligible":"Not Eligible";
	cout << loan_eligibility << endl;	
	
	return(0);		 
}
