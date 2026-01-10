#include <iostream>
#include <string>
using namespace std;
int main()
{
	string user_name , password , role;
	cout << "Enter the name :" << endl;
	cin >> user_name;
	cout << "Enter the password :" << endl;
	cin >> password;
		
	if (user_name == "admin" && password == "password123")
	{
		
		cout << "Authentication Successful." << endl;
		cout << " Enter your role :" << endl;
	    cin >> role;
		
		if (role == "Admin" || role == "admin")
		{
		    cout << "Full Access." << endl;
		}
		else if (role == "Guest" || role == "guest")
		{
			cout << "Limited Access." << endl;
		}
		else
		{
			cout << "no Access." << endl;
		}
		
	}
	
	else 
	{
		cout << "Authentication Failed. Access Denied." << endl;
	}
	
	return 0;
}
