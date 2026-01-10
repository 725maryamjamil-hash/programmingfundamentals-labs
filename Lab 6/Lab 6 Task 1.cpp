#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"Enter an integer :"<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<"Integer you enter is positive."<<endl;
	}
	else if(num<0)
	{
		cout<<"Intger you enter is negative."<<endl;
	}
	else
	{
		cout<<"Integer you enter is zero."<<endl;
	}
    return(0);
}
