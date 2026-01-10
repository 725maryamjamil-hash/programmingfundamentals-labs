#include<iostream>
using namespace std;
int main()
{
	int day;
	cout << "Enter an integer from (1-7) : ";
	cin >> day;
	switch (day)
	{
		case 1:
			cout <<"\nMonday";
			break;
		case 2:
			cout << "\nTuesday";
			break;
		case 3:
			cout << "\nWednesday";
			break;
		case 4:
			cout << "\nThursday";
			break;
		case 5:
			cout << "\nFriday";
			break;
		case 6:
			cout << "\nSaturday";
			break;
		case 7:
			cout << "\nSunday";
			break;
		default:
			cout << "\nInvalid day";
			
	}
	return(0);
}
