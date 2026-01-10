#include<iostream>
using namespace std;
int main()
{
	int choice1 , choice2, quantity;
	float total = 0;
	char again_order;
	do 
	{
		//main menu provided
		cout << "\nChoose from Main menu:"
		    << "\n 1 for breakfast"
		    << "\n 2 for lunch"
		    << "\n 3 for dinner  ";
		cin >> choice1;
		//submenu available
		switch(choice1)
		{
			//breakfast submenu
			case 1:
			{
				cout << "\nChoose from Breakfast menu :"
				    << "\n 1 for Anda paratha (Rs.40)"
				    << "\n 2 for Nan Channy (Rs.60)"
				    << "\n 3 for Siri paye (Rs.150)"
				    << "\n 4 for Tea (Rs.15) ";
				cin >> choice2;
				cout << "\nEnter the quantity : ";
				cin >> quantity;
				switch(choice2)
				{
					case 1:
					{
						total=(total+40)*quantity;
						break;}
					case 2:
					{
						total=(total+60)*quantity;
						break;
					}	
					case 3:
					{
						total=(total+150)*quantity;
						break;
					}
				    case 4:
					{
					    total=(total+15)*quantity;
						break;
				    }
					default:
					{
					    cout << "\nNot available.";
		            }
			   }
				break;   
			}
			case 2:
			{
				//lunch submenu
				cout << "\nChoose from the lunch submenu : "
				    << "\n 1 for Chicken Karahi (Rs.1050/kg)"
				    << "\n 2 for Mutton Karahi (Rs.1800/kg)"
				    << "\n 3 for Egg Fried (Rs.450/plate)"
				    << "\n 4 for BBQ (Rs.1050/dozen)  ";
				cin >> choice2;
				cout << "\nEnter the quantity : ";
				cin >> quantity;
				switch(choice2)
				{
					case 1:
					{
						total=(total+1050)*quantity;
						break;
					}
					case 2:
					{
						total=(total+1800)*quantity;
						break;
					}
					case 3:
					{
						total=(total+450)*quantity;
						break;
					}
					case 4:
					{
						total=(total+1050)*quantity;
						break;
					}
					default:
					{
						cout << "\nNot available.";
					}	
				}
				break;
			}
			case 3:
			{
				//dinner submenu
				cout << "\nChoose from dinner submenu :"
				    << "\n 1 for Chicken Karahi (Rs.1050/kg)"
				    << "\n 2 for Mutton Karahi (Rs.1800/kg)"
				    << "\n 3 for Egg Fried (Rs.450/plate)"
				    << "\n 4 for BBQ (Rs.1050/dozen)"
					<< "\n 5 for Saji (Rs.800/KG)  ";
				cin >> choice2;
				cout << "\nEnter the quantity : ";
				cin >> quantity;
				switch(choice2)
				{
					case 1:
					{
						total=(total+1050)*quantity;
						break;
					}
					case 2:
					{
						total=(total+1800)*quantity;
						break;
					}
					case 3:
					{
						total=(total+450)*quantity;
						break;
					}
					case 4:
					{
						total=(total+1050)*quantity;
						break;
					}
					case 5:
					{
						total=(total+800)*quantity;
						break;
					}
					default:
					{
						cout << "\nNot available.";
					}	
				}
				break;
			}
		    default:
			{
				cout << "\nInvalid choice.";
			}
	    }
		cout << "\nDo you want to order more? (y/n) : ";
		cin >> again_order;
	}while(again_order=='Y' || again_order=='y');
	cout << "\nTotal bill = Rs." << total << endl;
	return (0);    
}
