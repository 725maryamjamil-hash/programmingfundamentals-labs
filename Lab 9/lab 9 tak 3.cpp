#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter a positive number : " << endl;
	cin >> n;
	while(n<=0)
	{
		cout << "Error" <<endl;
		cout << "Enter positive number : " << endl;
		cin >> n;
	}
	cout << "Positive number entered by you is " << n << endl;
	return(0);
}
