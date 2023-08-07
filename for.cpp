#include <iostream>
#include <string>
using namespace std;
int main (){
	int number ,score ;
	int sum = 0 ;
	float avg;
	cout <<"Enter number of student :" ;
	cin >> number;
	for(int n = 1  ; n <= number;  n++) {//100 -1 หาร 5 ลงตัว   n= n-5
		cout  << "Enter Score " << n << " : " ;
		cin >> score;
	sum  = sum+ score;
	}
	cout  << "Total Score = " << sum <<endl ;
		cout  << "Total Score = " <<sum/(float)number <<endl ;
	return 0;
}