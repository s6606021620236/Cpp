#include <iostream>
#include <string>
using namespace std;
int main()
{    
    float W;
    float H;
    
    cout << "Enter Weight : " ;
    cin >>  W ;
    cout << "Enter High : " ;
    cin >>  H;
	cout << "********Output********\n"  ;
    cout << "BMI = " << W / (H/100 * H/100) <<endl ;

    return (0);
}