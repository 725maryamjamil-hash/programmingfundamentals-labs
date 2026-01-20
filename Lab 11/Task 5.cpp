#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter numbers of elements : ";
	cin >> n;
	int arr[n];
	cout << "Enter elements of array : " << endl;
	for (int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	int largest_num=arr[0];
	for (int j=1;j<n;j++)
	{
		if (arr[j]>largest_num)
		{
			largest_num=arr[j];
		}
	}
	cout << "Largest element of array is " << largest_num << endl;
	return (0); 
}
