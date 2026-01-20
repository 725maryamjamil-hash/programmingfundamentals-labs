#include<iostream>
using namespace std;
void swap_numbers(int *a,int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main()
{
	int num1=5 , num2=10 ;
	cout << "Numbers before swap :\nnum1 = " << num1 << "\nnum2 = " << num2 << endl;
	swap_numbers(&num1 , &num2);
	cout << "\nNumbers after swap :\nnum1 = " << num1 << "\nnum2 = " << num2 << endl;
	return (0);
}
