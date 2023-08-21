#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main ()
{	
	int r , score ,max=0,sum=0 ;
	float avg;
	srand(time(NULL));
	r = 1+rand()%10; 
	cout <<"Random number of student (1-10) :" << r << endl;
	
	for (int i=1; i<=r ;  i++){
	cout << "Input score "<< i << ": ";
	cin  >> score ;
	sum += score;
	if (max < score)
	max = score;
	}
	avg = sum/r; 
	cout << setfill('-')<<setw(19)<<""<< endl;
	cout << "Max Score = " << max << endl;
	cout << "Sum Score = " << sum << endl;
	cout << "Avg Score = " << fixed <<setprecision(2) << avg << endl; 
	cout << setfill('-')<<setw(19)<<""<< endl;
	system("pause");
	return 0;
}
