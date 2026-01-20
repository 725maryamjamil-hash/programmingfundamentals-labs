#include<iostream>
using namespace std;
int main()
{
	int arr[5] = {10,20,30,40,50};
	int *ptr_arr = arr;
    cout << "Array elements : ";
    for(int i=0;i<5;i++)
    {
    	cout << *(ptr_arr+i) << " ";
	}
	cout << endl;
	return (0);
}
