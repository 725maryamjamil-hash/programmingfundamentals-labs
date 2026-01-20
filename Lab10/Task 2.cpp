#include<iostream>
using namespace std;
int main()
{
	int n,limit;
	cout << "Enter a number for table :" << endl;
	cin >> n;
	cout << "Enter the limit :" << endl;
	cin >> limit;
	for(int i=1;i<=limit;i++)
	{
		cout << n << "*" << i << "=" << n*i <<endl;
	}
	return(0);
}
