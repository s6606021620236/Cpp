#include <iostream>
using namespace std;

int main()
{
    int amount;
    cout << "Amount to be withdraw: ";
    cin >> amount;

    int B_1000 = amount / 1000;
    amount %= 1000;

    int B_100 = amount / 100;
    amount %= 100;

    int B_50 = amount / 50;
    amount %= 50;

    int B_20 = amount / 20;

    cout << "1000: " << B_1000 << endl;
    cout << "100: "  << B_100  << endl;
    cout << "50: "   << B_50   << endl;
    cout << "20: "   << B_20   << endl;

    return 0;
}
