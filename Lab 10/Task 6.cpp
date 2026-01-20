#include<iostream>
using namespace std;
int main()
{
	int num;
	cout << "Enter a number :"<< endl;
	cin >> num;
	if (num<0)
	{
		cout << "Factorial of negative numbers is not defined." << endl;
	}
	else
	{
		long long factorial = 1;
		for(int i=1;i<=num;i++)
		{
			factorial=factorial*i;
		}
		cout << "Factorial of " << num << " is " << factorial << endl;
	}
	return (0);
}
