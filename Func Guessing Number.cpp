#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int checkNum(int n, int random);

int main() {
    int n = 0, random = 0, count = 0;
    srand(time(NULL));
    random = 1 + rand() % 10;
    cout << "### Welcome to guessing number game ###\n";
    cout << "Secret number has been chosen\n";
    
    do {
        count += 1;
        cout << "Guess the number (1 to 10): ";
        cin >> n;
        checkNum(  n,   random);
        
    } while (random != n);
    
    cout << "The secret number is " << random << endl;
    cout << "You made " << count << " guesses. ";
    
    return 0;
}

int checkNum(int n, int random) {
    if (n > random)
        cout << "The secret number is lower" << endl;
    else if (n < random)
        cout << "The secret number is higher" << endl;
    else if   (random == n){
        cout << "Congratulations!\n";
    }
        
    return n;  
}
