#include<iostream>
using namespace std;
int main()
{
	//variables
	char grade;
	int service_years , basic_salary;
	
	double  bonus , gross_salary , tax ,Net_salary;
	
	cout<<"Enter your grade (A,B,C) :"<<endl;
	cin>>grade;
	cout<<"Enter your years of service :"<<endl;
	cin>>service_years;
	
	//basic salary based on grade
	if (grade=='A')
	{
	    basic_salary=50000;
	}
	if (grade=='B')
	{
		basic_salary=30000;
	}
	if (grade=='C')
	{
		basic_salary=20000;
	}
	
	//bonuses according to years of experience
	
	if (service_years>=10)
	{
		bonus=0.10*basic_salary;
	}
	if (service_years>=5&&service_years<=9)
	{
		bonus=0.05*basic_salary;
	}
	if (service_years<5)
	{
		bonus=0;
	}
	
	gross_salary=basic_salary+bonus;                //gross salary
	
    //tax deduction
	if (gross_salary>40000)
	{
		tax=0.20*gross_salary;
	}
	if (gross_salary>=30000&&gross_salary<=40000)
	{
		tax=0.10*gross_salary;
	}
	if (gross_salary<30000)
	{
		tax=0;
	}
	
	
    Net_salary=gross_salary-tax;                       //net salary
	                           
	//outputs
	cout<<"Basic salary = $"<<basic_salary<<endl;
	cout<<"Bonus = $"<<bonus<<endl;
	cout<<"Gross salary = $"<<gross_salary<<endl;
	cout<<"Tax = $"<<tax<<endl;
	cout<<"Net salary = $"<<Net_salary<<endl;
	
	return(0); 
}
