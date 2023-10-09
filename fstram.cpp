#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;
int Menu();
void AddStudent(string FN);
void DisplayStudent(string FN);
int main()
{
	const string Filename = "student.dat";
	ifstream InFile;
	ofstream OutFile;
	int c;
	do {
	system("cls"); // call external command
	c = Menu();
	switch(c)
	{
	case 1 : AddStudent(Filename); break;
	case 2 : DisplayStudent(Filename); break;
	}
	} while(c != 0);
	cout << "Exit program." << endl;
	return(0);
}

int Menu()
{
string line(25,'=');
	int Choose;
	cout << "Program Add-Display Student Data\n";
	cout << line << endl;
	cout << ": Main Menu :\n";
	cout << line << endl;
	cout << ": 0 - Exit :\n";
	cout << ": 1 - Add Student :\n";
	cout << ": 2 - Display Student :\n";
	cout << line << endl;
	cout << " Enter choose : ";
	cin >> Choose;
	return(Choose);
}
void AddStudent(string FN)
{
// open file for write and append
	ofstream OutFile(FN.c_str(), ios_base::out | ios_base::app);
	if (OutFile.is_open()) {
	string Id, Name;
	int score;
	cout << "\n Add Student \n";
	cout << "Enter id : ";
	cin >> Id;
	cout << "Enter name : ";
	cin >> Name;
	cout << "Enter Score : " ;
	cin >> score;
// write data to file student.dat
	OutFile << Id << " " << Name << " "<< score << endl;
	OutFile.close();
	char Wait;
	cin.get(Wait);
	cout << "\nSaved already ,Press Enter to continue";
	cin.get(Wait);
	}
	else cout << "File could not opened." << endl;
	}
void DisplayStudent(string FN)
{
	ifstream InFile(FN.c_str(), ios_base::in); // open file for read
	if (InFile.is_open()) {
		string Id, Name , grade;
		int score;
		string line(30,'=');
		int n = 0;
		cout << "\nList Student\n";
		cout << line << endl;
		cout << " No. Id\t    Name  Score  Grade\n";
		cout << line << endl;
			

	// read data from file student.dat
	InFile >> Id >> Name >>score  ;
	while (!InFile.eof()) {
			if (score >= 80 && score <=100){
			grade ="A";
			 
			}else if (score >= 75 && score <=79){
			grade ="B+";

			}else if (score >= 70 && score <=74){
			grade ="B";

			}else if (score >= 65 && score <=69){
			grade ="C+";

			}else if (score >= 60 && score <=64){
			grade ="C";

			}else if (score >= 55 && score <=59){
			grade ="D+";

			}else if (score >= 50 && score <=54){
			grade ="D";

			}else if (score >= 0 && score <=49){
			grade ="F";
			}
			 
		n = n + 1;
		cout << right << setw(3) << n << " : ";
		cout << left << setw(6) << Id;
		cout << " " << Name <<  "   " << score <<"  "<< grade<< endl;
		InFile >> Id >> Name >> score ;
	}
	InFile.close();
	char Wait;
	cin.get(Wait);
	cout << "\nPress Enter to continue";
	cin.get(Wait);
	}
	else cout << "File could not opened."<<endl;
	}