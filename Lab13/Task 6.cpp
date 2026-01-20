#include <iostream>
using namespace std;
int main()
{
	int num = 10;
	void *ptr = &num;
	
	cout <<  "Value of integer is " << *(int*)ptr << endl;
	return (0);
}
