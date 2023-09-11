#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
float  update_balance (int command,float dollars,float balance);
 
int main() {
	float balance = 10000.00,amount;
	int command;
	cout << "Exit with 0\n" ;


	do {
		cout  << "Your Balance : " <<   fixed << setprecision(2) << balance  << endl;
		cout << "Input command(1 or withdraw, 2 deposit) : ";
		cin >> command;
		if (command == 0)
			break;
		cout << "Input amount : ";
		cin >> amount;
		balance = update_balance (command,amount,balance);
	}while(command != 0);

	return 0;
} 

float  update_balance (int command,float dollars,float balance){

	if(command == 1){
		balance -= dollars;
 
	}
	else if(command == 2){
		balance += dollars;
	}
	else {
		cout << "You input wrong menu " << endl;
	} 

	return (balance);
}
 