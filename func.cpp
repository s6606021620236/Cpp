#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
int main ()
{	
	int a =0, n =0 ,s=0 ;
/*	srand(time(NULL));

 
	for (int i=1; i<=40; i++){ //1000-9999
	cout <<  1000+rand()%8999 << endl;
	}*/ 
char message[20];
    cout <<"Enter stirng:";
	cin  >>message;
	cout << strlen(message) << endl;
	for (int i= strlen(message)-1; i>=0 ; i--){   //(int i=4; i<=strlen(message)-1; i--)
	cout << i  <<" = "<< message[i] << endl;

		if(isalpha(message[i])){
		cout << "This is aphabet"   << endl;
		a++;
		}
		else if(isdigit(message[i])){
			cout << "This is numberic" << endl;
		n++;
		}
		else {
		cout << "This is special character" << endl;
		s++;
		}
	}
	cout << "aphabet			=" << a << endl;
	cout << "numberic			=" << n << endl;
	cout << "special character  =" << s << endl;

	return 0;
}