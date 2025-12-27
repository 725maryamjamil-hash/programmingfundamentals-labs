#include<iostream>
#include<string>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age : ";
	cin>>age;
	string category;
	(age<=12)?category="Child":(age>=13&&age<=19)?category="Teenager":category="Adult";
	cout<<"\nAge "<<age<<" falls under the category: "<<category;
	return(0);
}
