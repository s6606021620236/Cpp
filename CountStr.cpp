#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count1 = 0, count2 = 0, count3 = 0, count4 = 0;
    string str;
    cout << "Enter message: ";
    getline(cin, str);  //  tum ma da mai nub space
    
    for (int n = 0; n < str.length(); n++) {
        if (str[n] >= 'A' && str[n] <= 'Z')
            count1++;
    }
    
    for (int n = 0; n < str.length(); n++) {
        if (str[n] >= 'a' && str[n] <= 'z')
            count2++;
    }

    for (int n = 0; n < str.length(); n++) {
        if (str[n] != 'a' && str[n] != 'z' && str[n] >= 'A' && str[n] <= 'Z' && str[n] != ' ')
            count4++;
    }
    
    for (int n = 0; n < str.length(); n++) {
        if (str[n] == ' ')
            count3++;
    }
    cout << "Your message has " << count1 << " uppers character."  << endl;
    cout << "Your message has " << count2 << " lowers character."  << endl;
    cout << "Your message has " << count3 << " space character."   << endl;
    cout << "Your message has " << count4 << " special character." << endl;
    return 0;
}
