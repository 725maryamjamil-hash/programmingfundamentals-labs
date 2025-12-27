#include <iostream>
using namespace std;
int main ()
{
	int marks1 , marks2 , marks3 ;
	int total_marks;
	double percentage;
	char grade1 , grade2 , grade3;
	
	//input marks
	cout << "Enter the marks of three subjects :" << endl;
	cin >> marks1 >> marks2 >> marks3;
	
	
	// total and percentage
	total_marks = marks1 + marks2 + marks3;
	percentage = (total_marks / 300.0) * 100;
	cout << "Total Marks =" << total_marks << endl;
	cout << "Percentage =" << percentage << endl;
	
	//grades
	if (percentage>=90&&percentage<=100)
	{
		cout << "Overall Grade A" << endl;
	}
	else if (percentage >=80)
	{
		cout <<"Overall Grade B" << endl;
	}
	else if (percentage >= 70)
	{
		cout << "Overall Grade C" << endl;
	}
	else if (percentage >=60)
	{
		cout << "Overall Grade D" << endl;
	}
	else 
	{
		cout << "Overall Grade F" << endl;
	}
	
	
	
	//grade in subject 1
	if (marks1>=90&&marks1<=100)
	{
		grade1 = 'A';
	}
	else if (marks1 >= 80)
	{
		grade1 = 'B';
	}
	else if (marks1 >= 70)
	{
		grade1 = 'C';
	}
	else if (marks1 >= 60)
	{
		grade1 = 'D';
	}
	else
	{
		grade1 = 'F';
	}
	cout << "Grade in subject 1 = " << grade1 << endl;
	
	
	
	// grade in subject 2
	if (marks2>=90&&marks2<=100)
	{
	    grade2 = 'A';
	}
	else if (marks2 >=80)
	{
		grade2 = 'B';
	}
	else if (marks2 >= 70)
	{
		grade2 = 'C';
	}	
	else if (marks2 >= 60)
	{
	    grade2 = 'D';
	}
	else
	{
		grade2 = 'F';
    }
	cout << "Grade in subject 2 = " << grade2 << endl;
	
	
	//grade in subject 3
	if (marks3>=90&&marks3<=100)
	{
		grade3 = 'A';
	}
	else if (marks3 >=80)
	{
		grade3 = 'B';
	}
	else if (marks3 >= 70)
	{
		grade3 = 'C';
	}	
	else if (marks3 >= 60)
	{
		grade3 = 'D';
	}
	else
	{
		grade3 = 'F';
	}
	cout << "Grade in subject 3 = " << grade3 << endl;
	
	
	//failure condition
	if (grade1 == 'F' || grade2 == 'F' || grade3 == 'F')
	{
		cout << "Failed" << endl;
        return(0);
	}	
	
	
	
	// scholarship eligibility
	if (grade1 == 'A' && grade2 == 'A' && grade3 == 'A' && total_marks >= 270)
	{
		cout << "Eligible for merit Scholarship." << endl;
	}
	else if ((grade1=='A'||grade1=='B')&&(grade2=='A'||grade2=='B')&&(grade3=='A'||grade3=='B')&&(total_marks>=240))
	{
		cout << "Eligible for Regular Scholarship." << endl;
	}
	else
	{
		cout << "Not eligible for any scholarship." << endl;
	}
	
	
	
	
	return (0);
}
	
