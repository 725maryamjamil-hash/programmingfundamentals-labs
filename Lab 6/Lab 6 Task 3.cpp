#include<iostream>
#include<string>
using namespace std;
int main()
{
	string user_name , passward;
	cout<<"Enter a use name :"<<endl;
	cin>>user_name;
	cout<<"Enter the passward :"<<endl;
	cin>>passward;
	if (user_name=="admin" && passward=="12345")
	{
		cout<<"Access Granted."<<endl;
	}
	else if(user_name=="admin" && passward!="12345")
	{
		cout<<"Wrong Passward."<<endl;
	}
	else
	{
		cout<<"User not found."<<endl;
	}
	return(0);
}
