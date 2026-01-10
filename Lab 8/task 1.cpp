#include<iostream>
using namespace std;
int main()
{
	int num1,num2;
	char choice;
	cout << "Enter two integers : ";
	cin >> num1 >> num2;
	cout << "\nChoose the operator from menu :"
	    << "\n + for addition"
	    << "\n - for subtraction"
	    << "\n * for multiplication"
	    << "\n / for division " << endl;
	cin >> choice;
	
	//switch statement
	switch (choice)
	{
		case '+':
			cout << "\nSum of " << num1 << " and " << num2 << " is " << num1+num2;
			break;
		case '-':
			cout << "\nDifference of " << num1 << " and " << num2 << " is " << num1-num2;
			break;
		case '*':
		    cout << "\nProduct of " << num1 << " and " << num2 << " is " << num1*num2;
			break;
		case '/':
			cout << "\nDivision of " << num1 << " and " << num2 << " is " << num1/num2;
			break;
		default:
			cout << "\nWrong input" << endl;
			break; 	
	}
	return(0);
}
