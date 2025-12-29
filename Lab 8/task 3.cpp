#include<iostream>
using namespace std;
int main()
{
	int area;
	const float pie=3.14159;
	cout << "Choose from following :"
	    << "\n 1 for area of circle"
	    << "\n 2 for area of rectangle"
	    << "\n 3 for area of triangle"<<endl;
	cin >> area;
	
	switch(area)
	{
		case 1:
			float radius;
			cout << "\nEnter the radius of circle : ";
			cin >> radius;
			cout << "\nArea of circle is " << pie*(radius*radius);
			break;
		case 2:
			float length , width;
			cout << "Enter the length of rectangle : ";
			cin >> length;
			cout << "\nEnter the width of rectangle :";
			cin >> width;
			cout << "\nArea of rectangle is " << length*width;
		    break;
		case 3:
			float base , height;
			cout << "\nEnter the height of triangle : ";
			cin >> height;
			cout << "\nEnter the base of triangle : ";
			cin >> base;
			cout << "\nArea of triangle : " << 0.5*(base*height);
			break;
	   default:
	   	    cout << "\nNot found this."; 
	}
	return (0);
}
