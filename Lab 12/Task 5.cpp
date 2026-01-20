#include<iostream>
using namespace std;
void add(int a , int b);            //function prototype
void subtract(int a , int b);
void multiply(int a , int b);
void divide(int a , int b);
//main function
int main()
{   
	int num1 , num2 , choice;
	do
	{   
		cout << "\n---Arithmetic operations---"
		    << "\n1 for addition"
		    << "\n2 for subtraction"
		    << "\n3 for multiplication"
		    << "\n4 for division"
		    << "\n5 for exit"
		    << "\nChoose from menu : ";
		cin >> choice;
		if(choice>=1&&choice<=4)
		{
		    cout << "Enter two integers :" << endl;
	        cin >> num1 >> num2;
	    }
		switch(choice)              //switch to call functions
		{
		case 1: add(num1,num2); break;
		case 2: subtract(num1,num2); break;
		case 3: multiply(num1,num2); break;
		case 4: divide(num1,num2); break;
		case 5: cout << "Exit calculator. Goodbye!" << endl; break;
		default: cout << "Invalid choice." << endl; 
		}
	}while(choice!=5);
	return (0);
}
//functions 

void add(int a , int b)
{   
	cout << "Sum of " << a << " and " << b << " is " << a+b << endl;
}
void subtract(int a , int b)
{
	cout << "Subtraction of " << a << " and " << b << " is " << a-b << endl; 
}
void multiply(int a ,int b)
{
    cout << "Multiplication of " << a << " and " << b << " is " << a*b << endl;
}
void divide(int a , int b)
{
	if(b!=0)
	{
		cout << "Division of " << a << " and " << b << " is " << a/b << endl;
	}
	else
	{
		cout << "Error! Division by zero." << endl;
	}
}
	

