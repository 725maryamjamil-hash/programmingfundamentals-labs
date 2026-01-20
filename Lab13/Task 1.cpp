#include<iostream>
using namespace std;
int main()
{
	int num=8;
	int *ptr_num=&num;
	*ptr_num=20;
	cout << "Modified value of num is :" << num << endl;
	return (0);
}
