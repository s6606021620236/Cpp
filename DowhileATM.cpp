#include <iostream>
using namespace std;
int main() {
 float balance = 0.0 ,money;
 char menu;
do {
    cout << "1.Deposit\n" ;
    cout << "2.Withdraw\n" ;
    cout << "3.Balance\n";
    cout << "4.Exit\n";
    cout << "Please Inut menu:";
    cin >> menu ;
    if (menu == '1'){
    cout << "Welcome to deposit\n" ;
    cout << "Input Amount :" ;
    cin >> money;
    balance += money; // balance = balance + money;
    }
     
    else if (menu == '2'){
    cout << "Welcome to Withdraw\n" ;
    cout << "Input Amount :" ;
    cin >> money;
        if (balance < money){
    cout << "Your Balance not enough" ;
    } else balance = balance - money ;
    balance -= money; // balance = balance - money;
    }
    
    else if (menu == '3'){
    cout << "Welcome to Balance\n" ;
    cout << "Your Balance = " << balance << endl;
    }

    else if (menu == '0'){
    cout << "*****Exit*****\n" ;
    }
    
    else {
    cout <<"You input wrong menu\n";
    }    
    
    
}while(menu != '0');
    return 0;
}