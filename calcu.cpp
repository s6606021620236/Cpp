#include <iostream>
#include <string>
using namespace std;
int main (){
	int num1 ,num2;
	int sum = 0,total =0 ;
     
	cout <<"Enter number1 : " ;
	cin >> num1;
	cout <<"Enter number2 : " ;
	cin >> num2;
	for(int n = 1  ; n <= num2;  n++) {          //100 -1 หาร 5 ลงตัว   n= n-5
		cout  << num1 << " x " << num2 << " = " << num1*n << endl;
		total = total+num1*n;
	}
	cout << "total = " << total << endl;
	cout << "AVG   = " <<total/(float)num2 <<endl ;
	return 0;
}