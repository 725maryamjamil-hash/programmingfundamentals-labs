#include<iostream>
using namespace std;
int main()
{
	int temperature;
	cout<<"Enter the temperture of today : "<<endl;
	cin>>temperature;
	if(temperature>=40)
	{
		cout<<"Stay indoors because it is extremely hot and could be dangerous to health."<<endl;
	}
	else if(temperature>=30 && temperature<=39)
	{
		cout<<"Drinking plenty of to stay hydrated in the hot weather."<<endl;
	}
	else if(temperature<=20 && temperature>=29)
	{
		cout<<"The weather is pleasent and suitble for outdoor activities."<<endl;
	}
	else
	{
		cout<<"Wearing worm clothes to stay comfortable in the cooler weather."<<endl;
	}
	return(0);
}
