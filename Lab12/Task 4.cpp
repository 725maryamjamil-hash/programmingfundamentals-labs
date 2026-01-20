#include<iostream>
using namespace std;
int factorial(int n)
{
	if(n<0)
	{
		cout << "Factorial of negative numbers does not exits." << endl;
	}
	else
	{
	long long factorial=1;
	for(int i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	cout << "Factorial of " << n << " is " << factorial << endl;
	}
	return (1);
}
int main()
{
	int num;
	cout << "Enter a number : ";
	cin >> num;
	factorial(num);
	return (0);
}
