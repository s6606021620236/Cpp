#include <iostream>
#include <string>
using namespace std;
int main()
{
string name;
float Salary,Sale,Com;  
cout << "Enter Name  : " ;
cin  >> name;
cout << "Enter Salary: " ;
cin  >> Salary;
cout << "Enter Sale  : " ;
cin  >> Sale;
cout << "Enter Commission Percent: " ;
cin  >> Com;

cout << "---------Output---------*\n" ;
cout << "Your name = " << name << endl; 
cout << "Total Revenue = "<<Salary+(Sale*(Com/100))<<" Bath"<< endl;
cout << "------------------------*\n" ;

return (0);
}