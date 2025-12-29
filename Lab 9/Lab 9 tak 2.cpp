#include<iostream>
using namespace std;
int main()
{
	int n , j , i=1;
	cout << "Enter an iteger for table : " << endl;
	cin >> n;
	cout << "Enter the limit : " << endl;
	cin >> j;
	while(i<=j)
	{
		cout << n << "*" << i << "=" << n*i << endl;
		i++;
	}
	return (0);
}
