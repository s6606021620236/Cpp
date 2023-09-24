#include <iostream>
#include <ctime>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
    int random[10] ;
    srand(time(NULL));
    cout << "Element  Value  Histogram" << endl;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        random[i] = 1 + rand() % 30;
    }

    for (int i = 0; i < 10; i++)
    {
        cout <<"    " << i << "    " << random[i] << "    ";
        for (int j = 0; j < random[i]; j++)
        {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
