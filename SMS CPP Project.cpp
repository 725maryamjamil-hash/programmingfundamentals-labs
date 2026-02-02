#include <iostream>
#include <iomanip>
#include <cstring>
#include <cstdlib>

using namespace std;

#define MAX 100   // Fixed array size

// Fixed arrays
int productID[MAX];
char productName[MAX][30];
float productPrice[MAX];
int productQuantity[MAX];

int totalProducts = 0;

// Function prototypes
void login();
void mainMenu();
void initializeDefaultProducts();
void addProduct();
void displayProducts();
void searchProduct();
void updateProduct();
void deleteProduct();
void lowStockProducts();
void totalStoreValue();
void clearAllProducts();
bool isDuplicateID(int);

int main() 
{
    login();
    initializeDefaultProducts();

    int choice;
    do 
	{
        mainMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) 
		{
            case 1: addProduct(); break;
            case 2: displayProducts(); break;
            case 3: searchProduct(); break;
            case 4: updateProduct(); break;
            case 5: deleteProduct(); break;
            case 6: lowStockProducts(); break;
            case 7: totalStoreValue(); break;
            case 8: clearAllProducts(); break;
            case 9: cout << "\nExiting system...\n"; break;
            default: cout << "\nInvalid choice!\n";
        }
    
	} while (choice != 9);

    return 0;
}

// Login system
void login() 
{
    char user[20], pass[20];
    cout << "===== LOGIN =====\n";
    cout << "Username: ";
    cin >> user;
    cout << "Password: ";
    cin >> pass;
    if (strcmp(user, "admin") == 0 && strcmp(pass, "1234") == 0) 
	{
        cout << "Login Successful!" << endl << endl;
    }
	 else 
	 {
        cout << "Access Denied!" << endl;
        exit(0);
   
	}
    
}

// Menu
void mainMenu() 
{
    cout << "\n==============================\n";
    cout << "   STORE MANAGEMENT SYSTEM\n";
    cout << "==============================\n";
    cout << "1. Add Product\n";
    cout << "2. Display Products\n";
    cout << "3. Search Product\n";
    cout << "4. Update Product\n";
    cout << "5. Delete Product\n";
    cout << "6. Low Stock Products\n";
    cout << "7. Total Store Value\n";
    cout << "8. Clear All Products\n";
    cout << "9. Exit\n";
    cout << "==============================\n";

}

// Default products
void initializeDefaultProducts() {
    productID[0] = 101; 
	strcpy(productName[0], "Sugar"); 
	productPrice[0] = 45.5; 
	productQuantity[0] = 12;
    productID[1] = 102;
	 
	strcpy(productName[1], "Rice");  
	productPrice[1] = 60.0; 
	productQuantity[1] = 8;
    productID[2] = 103;
	 
	strcpy(productName[2], "Oil");   
	productPrice[2] = 120.0; 
	productQuantity[2] = 4;

    totalProducts = 3;
}

// Duplicate ID check
bool isDuplicateID(int id) 
{
    for (int i = 0; i < totalProducts; i++)
        if (productID[i] == id)
            return true;
    return false;
}

// Add product
void addProduct() 
{
    if (totalProducts >= MAX) 
	{
        cout << "Store is full!\n";
        return;
    }

    int id;
    cout << "Enter Product ID: ";
    cin >> id;

    if (isDuplicateID(id)) 
	{
        cout << "Duplicate ID not allowed!\n";
        return;
    }

    productID[totalProducts] = id;

    cout << "Enter Product Name: ";
    cin >> productName[totalProducts];
    cout << "Enter Product Price: ";
    cin >> productPrice[totalProducts];
    cout << "Enter Product Quantity: ";
    cin >> productQuantity[totalProducts];

    totalProducts++;
    cout << "Product Added Successfully!\n";
}

// Display products
void displayProducts() 
{
    if (totalProducts == 0) 
	{
        cout << "No records found.\n";
        return;
    }

    cout << left << setw(10) << "ID"
         << setw(15) << "Name"
         << setw(10) << "Price"
         << setw(10) << "Qty" << endl;

    for (int i = 0; i < totalProducts; i++) 
	{
        cout << left << setw(10) << productID[i]
             << setw(15) << productName[i]
             << setw(10) << productPrice[i]
             << setw(10) << productQuantity[i] << endl;
    }
}

// Search
void searchProduct() 
{
    int id;
    cout << "Enter ID to search: ";
    cin >> id;

    for (int i = 0; i < totalProducts; i++) 
	{
        if (productID[i] == id) 
		{
            cout << "Product Found:\n";
            cout << "Name: " << productName[i]
                 << "\nPrice: " << productPrice[i]
                 << "\nQuantity: " << productQuantity[i] << endl;
            return;
        }
    }
    cout << "Product not found.\n";
}

// Update
void updateProduct() 
{
    int id;
    cout << "Enter ID to update: ";
    cin >> id;

    for (int i = 0; i < totalProducts; i++) 
	{
        if (productID[i] == id) 
		{
            cout << "New Name: ";
            cin >> productName[i];
            cout << "New Price: ";
            cin >> productPrice[i];
            cout << "New Quantity: ";
            cin >> productQuantity[i];
            cout << "Updated Successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

// Delete
void deleteProduct() 
{
    int id;
    char confirm;
    cout << "Enter ID to delete: ";
    cin >> id;
    cout << "Confirm deletion (y/n): ";
    cin >> confirm;

    if (confirm != 'y' && confirm != 'Y') return;

    for (int i = 0; i < totalProducts; i++) 
	{
        if (productID[i] == id) {
            for (int j = i; j < totalProducts - 1; j++) 
			{
                productID[j] = productID[j + 1];
                strcpy(productName[j], productName[j + 1]);
                productPrice[j] = productPrice[j + 1];
                productQuantity[j] = productQuantity[j + 1];
            }
            totalProducts--;
            cout << "Deleted Successfully!\n";
            return;
        }
    }
    cout << "Product not found.\n";
}

// Low stock
void lowStockProducts() 
{
    cout << "\nLow Stock Products (Qty < 5):\n";
    for (int i = 0; i < totalProducts; i++)
        if (productQuantity[i] < 5)
            cout << productName[i] << " (" << productQuantity[i] << ")\n";
}

// Total store value
void totalStoreValue() 
{
    float sum = 0;
    for (int i = 0; i < totalProducts; i++)
    {
        sum += productPrice[i] * productQuantity[i];
    }
    cout << "Total Store Value: " << sum << endl;
}

// Clear all
void clearAllProducts() 
{
    totalProducts = 0;
    cout << "All records cleared.\n";
}

