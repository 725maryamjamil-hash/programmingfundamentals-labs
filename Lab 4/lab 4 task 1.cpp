#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter an integer : "<<endl;
	cin>>n;
	(n%2==0)?cout<<"The number "<<n<<" is even":
		cout<<"The number "<<n<<" is odd";
	return(0);	
}
