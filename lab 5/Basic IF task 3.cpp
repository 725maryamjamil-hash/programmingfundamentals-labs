#include<iostream>
using namespace std;
int main()
{
	int a, b, c;
	cout<<"Enter three numbers: "<<endl;
	cin>>a>>b>>c;
	if (a>b&&a>c)
	{
		cout<<a<<" is the laegest number."<<endl;
	}
	if (b>a&&b>c)
	{
		cout<<b<<" is the largest number."<<endl;
	}
	if (c>a&&c>b)
	{
		cout<<c<<" is the largest number."<<endl;
	}
	return(0);
    
}
