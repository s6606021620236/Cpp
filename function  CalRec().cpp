#include <iostream>
using namespace std;
void CalCircle();
void CalRetangle();
int main(){
	char ch;
	do {
	cout << "Programing Cal culate of Circle."<< endl;
	cout << "********************************"<< endl;
	cout << "1.Circle. " << endl;
	cout << "2.Retangle" << endl;
	cout << "3.Exit    " << endl; 
	cout << "Choose Menu :";
	cin >> ch;
	if(ch == '1')
		CalCircle();
	else if(ch == '2')
		CalRetangle();
	else if(ch == '3')
	cout << "Exit" << endl;
	else 
	cout << "Wrong menu" << endl;
	}while (ch == 3);

	return (0);
}

void CalCircle(){
	float Radius, Area ,Circumference;
	cout << "Input radius :";
	cin >> Radius ;
	Area = 3.14f*Radius*Radius;
	Circumference = 2*3.14f*Radius;
	cout << endl;
	cout << "Area of Circle :" << Area << endl;
	cout << "Circumference of Circle :" << Circumference << endl;
	cout << "diameter of Circle :" << (2*Radius) << endl;
}

void CalRetangle(){
	float W, l ,rec;
	cout << "Input Wighth :";
	cin >> W;
	cout << "Input Length :";
	cin >> l;
	rec = W*l;
	cout << "Area of Retangle :" << rec << endl;
}
