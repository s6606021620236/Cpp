#include <iostream>
#include <string>
using namespace std;

int main() {
    char ch;
    int num;

        cout <<"Select Menu" << endl;
        cout <<"*********************" << endl;
        cout <<"1.Align Left" << endl;
        cout <<"2.Align Right" << endl;
        cout <<"3.Center" << endl;
        cout <<"4.Exit" << endl;
        cout <<"*********************" << endl;
        cout <<"Select Menu No.:";
        cin >> ch;

        if (ch == '1') {
            cout << "Input number of line:";
            cin >> num;
            for (int i = 1; i <= num; ++i) {
                for (int j = 0; j < i; ++j) {
                    cout << '*';
                }
                cout << endl;
            }
        }
        else if (ch == '2') {
            cout << "Input number of line:";
            cin >> num;
            for (int i = 1; i <= num; ++i) {
                for (int j = 0; j < num - i; ++j) {
                    cout << ' ';
                }
                for (int j = 0; j < i; ++j) {
                    cout << '*';
                }
                cout << endl;
            }
        }
        else if (ch == '3') {
            cout << "Input number of line:";
            cin >> num;
            for (int i = 1; i <= num; ++i) {
                for (int j = 0; j < num - i; ++j) {
                    cout << ' ';
                }
                for (int j = 0; j < 2 * i - 1; ++j) {
                    cout << '*';
                }
                cout << endl;
            }
        }
	else if (ch == '4')
		cout << "\n...Exit Program...\n";
	else cout << "\nYou choose out of range is not process.\n";


    return 0;
}
