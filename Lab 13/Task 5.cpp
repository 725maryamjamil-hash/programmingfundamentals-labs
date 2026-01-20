#include<iostream>
using namespace std;
int main()
{
	int *ptr = NULL;
	if (ptr == NULL)
	{
		cout << "Pointer does not point to any valid memory." << endl;
	}
	else
	{
		cout << "Pointer holds memory address : " << ptr << endl;
	}
	return (0);
}
