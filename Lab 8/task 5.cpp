#include<iostream>
using namespace std;
int main()
{
	int category , quantity;
	char items;
	double total_price=0 , discount=0;
	cout << "Choose any one category of items : "
	    << "\n 1 for Electronics"
	    << "\n 2 for Clothing"
	    << "\n 3 for Grocries" << endl;
	cin >> category;
	 
	 
	// items and prices
	switch(category)    
    {
    	case 1:
    		{
    			cout << "\nChoose the item you want to purchase : "
    			    << "\n a for Laptop ($1000)"
    			    << "\n b for Smartphone  ($700)"
    			    << "\n c for Headphones ($150)" << endl;
    			cin >> items;
    			cout << "Enter quantity :";
    			cin >> quantity;
				switch(items)
				{
					case 'a':
					    total_price = 1000*quantity;
						break;
					case 'b':
						total_price = 700*quantity;
						break;
					case 'c':
						total_price = 150*quantity;
						break;
					default:
						cout << "Invalid item.";
				}
			break;	    
			}
		case 2:
			{
				cout << "\nChoose the item you want to purchase : "
    			    << "\n a for Jacket ($120)"
    			    << "\n b for T-Shirt ($40)"
    			    << "\n c for Jeans ($60)" << endl;
    			cin >> items;
    			cout << "Enter quantity :";
    			cin >> quantity;
				switch(items)
				{
					case 'a':
					    total_price = 120*quantity;
						break;
					case 'b':
						total_price = 40*quantity;
						break;
					case 'c':
						total_price = 60*quantity;
						break;
					default:
						cout << "Invalid item.";
				}
			break;	    
			}
		case 3:
		{
			cout << "\nChoose the item you want to purchase : "
    			    << "\n a for Milk (1 liter - $2)"
    			    << "\n b for Bread (1 loaf - $3)"
    			    << "\n c for Eggs (1 dozen - $5)" << endl;
    			cin >> items;
    			cout << "Enter quantity :";
    			cin >> quantity;
				switch(items)
				{
					case 'a':
					    total_price = 2*quantity;
						break;
					case 'b':
						total_price = 3*quantity;
						break;
					case 'c':
						total_price = 5*quantity;
						break;
					default:
						cout << "Invalid item.";
				}
				break;
				default:
				{
					cout << "\nInvalid category choice.";
				}
				return (0);
				}
    }
	
	//discount policy
	if(total_price<100)
	{
		discount = 0;
	}
	else if (total_price>=100&&total_price<=500)
	{
		discount = 0.10;
	}
	else
	{
		discount = 0.20;
	}
	 
	 
	// outputs
	cout << "\n----Invoice----" << endl;
	cout << "Total price = $" << total_price << endl;
	cout << "Discount = " << discount*100 << "%" << endl;
	cout << "Final price = $" << total_price-(total_price*discount) << endl;
	return(0);
}
