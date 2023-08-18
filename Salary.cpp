#include <iostream>
using namespace std;
int main() {
 float  sale,salary,Commission=0,Total=0 ;
 char menu;
do {
    cout << "1.Input salary\n" ;
    cout << "2.Input sale\n" ;
    cout << "3.Report\n";
    cout << "4.Exit\n";
    cout << "Enter menu:";
    cin >> menu ;
    if (menu == '1'){
    cout << "Input salary :" ;
    cin >> salary;
    
    }
     
    else if (menu == '2'){
    cout << "2.Input sale :" ;
    cin >> sale;
    if(sale >= 0 && sale <= 10000 )
    Commission = sale * 5/100;
    else if(sale >= 1001 && sale <= 20000 )
    Commission = sale * 10/100;
    else if(sale > 20000 )
    Commission = sale * 15/100;
    }
    
    else if (menu == '3'){
    Total = salary+Commission;
    cout <<"----------------------\n" ;
    cout << "salary     = " << salary << endl;
    cout << "sale       = " << sale   << endl;
    cout << "Commission = " << Commission << endl;
    cout << "Total      = "  << Total  << endl;
    cout <<"----------------------\n" ;
    }

    else if (menu == '4'){
    cout << "---Exit---\n" ;
    break;
    }
    
    else {
    cout <<"You input wrong menu\n";
    }    
    
    
}while(menu != '0');
    return 0;
}