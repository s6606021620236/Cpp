#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

void displaymenu();

float area(const float Radius);
float area(const float Length ,const float Width );
float area(const double base ,const double high );
float area(const double height ,const double a,const double b );
int main()
{	
	char Choice ;
	bool flag = true;
	do {
		displaymenu();
		cin >> Choice;
		if (Choice == '1'){
			float Radius;
			cout << "\nEnter radius :" ;
			cin >> Radius ;
			cout << "Area of Circle = " << fixed;
			cout << setprecision(2) << area(Radius) << endl;
		}
		else if (Choice == '2'){
			float Length ,Width;
			cout << "Enter length and width :" ;
			cin >> Length >> Width ;
			cout << "Area of Retangle = " << fixed;
			cout << setprecision(2) << area(Length,Width) ;
			cout << endl;
		}

		else if (Choice == '3'){
			double base ,high;
			cout << "Enter base and high : " ;
			cin >> base >> high ;
			cout << "Area of Trinangle = " << fixed;
			cout << setprecision(2) << area(base , high) ;
			cout << endl;
		}
		else if (Choice == '4'){
			double height, a ,b;
			cout << "Enter Hight and base1,base2 : ";
			cin >> height >> a >> b ;
			cout << "Area of Trapezoid = " << fixed;
			cout << setprecision(2) << area(height ,a, b) ;
			cout << endl;
		}

		else if (Choice == '5'){
			flag = false;
		}
		else {
			cout << "\nYou choose out of range is ";
			cout << "not process\n";
		}
	}while(flag);
	cout << "Exit Program..."<< endl;
	return 0;
}
float area(const float Radius)
{
	return(3.14159F*Radius*Radius);
}

float area(const float Length ,const float Width )
{
	return(Length* Width);
}
float area(const double base ,const double high )
{
	return(0.5*base*high);
}
float area(const double height ,const double a,const double b )
{
	return(0.5 * height * (a+b));
}     



void displaymenu ()
{
	cout << endl;
	cout << "Program Calculate Arena " << endl;
	cout << " 1.Circle "			   << endl;
	cout << " 2.Retangle "			   << endl;
	cout << " 3.Triangle "			   << endl;
	cout << " 4.Trapezoid "			   << endl;
	cout << " 5.exit"				   << endl;
	cout << "Enter your choose number : " ;
}



