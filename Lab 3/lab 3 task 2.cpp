#include<iostream>
using namespace std;
int main(){
double item1=12.95,item2=24.95,item3=6.95,item4=14.95,item5=3.95;
double SubTotal=item1+item2+item3+item4+item5;
const double SaleTax=(SubTotal*0.06);
double total=SubTotal+SaleTax;
cout<<"Price of item1: $"<<item1<<endl;
cout<<"Price of item2: $"<<item2<<endl;
cout<<"Price of item3: $"<<item3<<endl;
cout<<"Price of item4: $"<<item4<<endl;
cout<<"Price of item5: $"<<item5<<endl;
cout<<"Subtotl: $"<<SubTotal<<endl;
cout<<"Sales Tax (6%): $"<<SaleTax<<endl;
cout<<"Total: $"<<total<<endl;
return(0); 
}
