#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
int main(){
	int score[4] ,avg , total= 0  ,max = 0  , min=9999999999999999999 ; 	 
	string name[4] ;

	for (int i = 0; i < 4; i++){ // i <= 3
		cout <<"Enter Name [" << i <<"] : "  ;
		cin >> name[i];
		cout <<"Enter Score[" << i <<"] : "  ;
		cin >>   score[i];
		total += score[i];

	    if (score[i] <  min) 
			min = score[i]; 
		if (score[i] >  max) 
			max = score[i];

		
	}
	cout <<"----------------------\n";
	cout <<"Name           Score\n";
	cout <<"----------------------\n";
	for (int i = 0; i < 4; i++){  
		cout << name[i] <<"\t\t"<< score[i] << endl ;
	}
	cout <<"----------------------\n";
	cout <<"Max score     = " << max << endl;
	cout <<"Min score     = " << min << endl;
	cout <<"Total Score   = " << total << endl;
	cout <<"Average Score = " <<(float)total/4 << endl;
 
	return 0;
}