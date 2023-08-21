#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main ()
{	
	float total;
	cout << setfill('*')<<setw(33)<<" "<< endl;
	cout <<"Hello " << endl;
	cout << setfill('*')<<setw(33)<<" "<< endl;
 
	total = 5.15415454*2132.51;
	cout << fixed <<setprecision(1) << total << endl;
	cout << fixed <<setprecision(3) << 1235.12365 << endl;

	return 0;
}