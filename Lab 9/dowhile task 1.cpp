#include<iostream>
#include<string>
using namespace std;
int main()
{
	string password , correct_password = "admin123";
	do
	{
		cout << "Enter password : ";
		cin >> password;
		if(password != correct_password)
		{
			cout << "\nIncorrect password. Try again." << endl;
		}
	}
	while(password != correct_password);
    
    cout << "Congratulations! Password matched." << endl;
    return (0);
	
}
