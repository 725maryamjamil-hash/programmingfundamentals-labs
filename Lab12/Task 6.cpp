#include<iostream>
using namespace std;
void display_menu()
{
	cout << "\n---Menu---"
		<< "\n1. Nan Chay (Rs.60)"
		<< "\n2. Chicken Karahi (Rs.1500/KG)"
		<< "\n3. Mutton Karahi (Rs.1800/Kg)"
		<< "\n4. Egg Fried Rice (Rs.450/Plate)"
		<< "\n5. Siri Paye (Rs.150)"
		<< "\n6. Exit" << endl;
}
double total_of_item(int choice , int quantity)
{   
    double price=0;
	switch(choice)
	{
	    case 1: price=60; break;
	    case 2: price=1500; break;
	    case 3: price=1800; break;
	    case 4: price=450; break;
	    case 5: price=150; break;
	    case 6: price=0; break;
	    default: cout << "\nInvalid choice." << endl;
   }
   return (price*quantity);
}
double final_bill(double total)
{double tax=0;
	if(total<500)
	{
	    tax=0;
	}
	else if(total<=1000&&total>=500)
	{
		tax=total*0.5;
	}
	else
	{
		tax=total*0.10;
	}
	return (total+tax);
}
int main()
{
	int choice , quantity;
	double total_bill=0;
	do
	{
		display_menu();
		cout << "Enter number of selected item : ";
		cin >> choice;
		if(choice>=1&&choice<=5)
		{
			cout << "Enter the quantity : ";
			cin >> quantity;
			double item_choice=total_of_item(choice , quantity);
			total_bill=total_bill+item_choice;
			cout << "Item cost : Rs." << total_bill << endl;
		}
	}while(choice!=6);
	double final = final_bill(total_bill);
	cout << "\nTotal bill before tax : Rs." << total_bill << endl;
	cout << "Final bill after tax : Rs." << final << endl;
	cout << "Goodbye! Thank you." << endl;
	return (0);
}
