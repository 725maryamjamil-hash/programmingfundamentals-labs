#include<iostream>
using namespace std;
void check_even_odd(int num)
{
	if(num % 2 == 0)
	{
		cout << num << " is even." << endl;
	}
	else
	{
		cout << num << " is odd." << endl;
	}
}
int main()
{
	check_even_odd(10);
	check_even_odd(17);
	check_even_odd(6);
	check_even_odd(7);                                      
	return (0);
}
