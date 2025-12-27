#include<iostream>
#include<iomanip>
using namespace std;
int main(){
const double score1=85.5,score2=90.75,score3=88.25;
const double average=(score1+score2+score3)/3;
cout<<"The average of 85.5 , 90.75 and 88.25 = "<<fixed<<setprecision(2)<<average<<endl;
return(0);
}
