#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Enter the number of elements : ";
	cin >> n;
	int arr[n];
	int sum = 0;
	
	cout << "Enter elements of array : " << endl;
	for(int i=0;i<n;i++)
	{
		cin >> arr[i];
		sum=sum+arr[i];
	}
	float average=(double)sum/n;
	cout << "Sum of array = " << sum << endl;
	cout << "Average of array = " << average << endl;
	return (0);
}
