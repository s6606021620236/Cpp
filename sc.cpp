#include <iostream>
#include <string>
using namespace std;
void ParseName(string &FirstName,string &LastName, const string FullName);
void check(string FirstName);
int main()
{
	string Name = "Stroustrup, Bjarne";
	string LastName, FirstName;
	ParseName(FirstName,LastName,Name);
	Name = FirstName + " " + LastName;
	cout << "Name : " << Name << endl;

	check(FirstName);
	 
	return(0);
}
void ParseName(string &FirstName,string &LastName, const string FullName)
{
	int I = FullName.find(",");
	LastName = FullName.substr(0,I);
	FirstName = FullName.substr(I+2,FullName.size());
}

void check(string FirstName){
	for(int i = 0;i <FirstName.length();i++)
	{	
		int lower = 0 , upper = 0 , special = 0; 
		cout << FirstName.at(i) << endl; 
		if(islower(FirstName.at(i)))
			lower++ ;
		else if(isupper(FirstName.at(i)))
			upper++ ; 
		else
			special++ ; 
		cout <<"Lower Character   =" << lower   << endl;
		cout <<"upper Character   =" << upper   << endl;
		cout <<"special Character =" << special << endl;	
	}
}