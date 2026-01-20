#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int arr[n];
	cout << "\nEnter the elements of array : " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
	}
	
	cout << "\nArray elements in reverse : ";
	for(int j=n-1;j>=0;j--)
	{
		cout << arr[j] << " ";
	}
	return (0);
	
}
