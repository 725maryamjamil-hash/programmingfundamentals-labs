#include<iostream>
using namespace std;
int main()
{
	double account_balance=1000;
	int i;
	while(true)
	{
	cout << "\nChoose any of following from menu :"
	    << "\n1 for Deposit money"
	    << "\n2 for Withdraw amount"
	    << "\n3 for Check balance"
	    << "\n4 for exit" << endl;
	cin >> i;
	if(i==4)         //exit  program
	{
		cout << "Exiting program.Goodbye!" << endl;
		break;
	}
    switch(i)
		{
			case 1:   //Deposit amount
				{
					
				    double deposit_amount;
				    cout << "Enter the amount you want to deposit : $";
			        cin >> deposit_amount;
			        if(deposit_amount>=0)
			        {
				        account_balance=account_balance+deposit_amount;
				        cout << "\nDeposit successful! New amount : $" << account_balance << endl;
				    }
				    else
				    {
				    	cout << "Invalid deposit amount." << endl;
					}
				    break;
			    }
			case 2:   //withdrawl amount
				{
					double withdraw_amount;
					cout << "Enter the amount you want to withdraw from account : $";
					cin >> withdraw_amount;
					if(withdraw_amount>0 && withdraw_amount<=account_balance)
					{
						account_balance=account_balance-withdraw_amount;
						cout << "\nWithdrawal successful! New amount : $" << account_balance << endl;
					}
					else if(withdraw_amount>account_balance)
					{
						cout << "Your withdrawl amount is more than your account balance." << endl;
					}
					else
					{
						cout << "Insufficient withdrawal amount." << endl;
					}
					break;
				}
			case 3:   //current balance
				{
					cout << "Your current account balance is $" << account_balance << endl;
					break;
				}	
			default:
				{
					cout << "Invalid manu choice." << endl;
				}
		    }
	    }
	return(0);    
	    
}
