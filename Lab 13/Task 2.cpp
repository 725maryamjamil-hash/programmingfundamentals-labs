#include<iostream>
using namespace std;
int main()
{
	int num=8;
	int *ptr_num = &num;
	cout << "Value of num is : " << *ptr_num << endl;
	return (0);
}
