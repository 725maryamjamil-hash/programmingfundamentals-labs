#include<iostream>
using namespace std;
int main()
{
	int currency;
	double USD;
	cout << "Enter USD amount : ";
	cin >> USD;
	cout << "\nChoose the convertor for USD : "
	    << "\n 1 for PKR"
	    << "\n 2 for INR"
	    << "\n 3 for Euros ";
	cin >> currency;
	switch(currency)
	{
		case 1:
			cout << USD << " USD converted to PKR = " << 280.60*USD << endl;
			break; 
		case 2:
			cout << USD << " USD converted to INR = " << 89.81*USD << endl;
			break;
		case 3:
			cout << USD << " USD converted to Euros = " << 0.849*USD << endl;
			break;
		default:
			cout << "Not found in currency calculator."	<< endl;
			
	} 
	return (0); 
}
