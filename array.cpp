#include <iostream>
#include <string>
#include <iomanip>
using namespace std;
string check_result(int x);
int main(){
	int score[4]    , total= 0  ,max = 0  ,min  ; 	 
	string name[4] ;
 
	for (int i = 0; i < 4; i++){ // i <= 3
		cout <<"Enter Name [" << i <<"] : "  ;
		cin >> name[i];
		cout <<"Enter Score[" << i <<"] : "  ;
		cin >> score[i];
		total += score[i];

		if (score[i] >  max) 
			max = score[i];	
	}
	min = score[0];
	cout <<"---------------------------------------\n";
	cout <<"Name           Score\t\tResult\n";
	cout <<"---------------------------------------\n";

	for (int i = 0; i < 4; i++){  
		cout << name[i] <<"\t\t"<< score[i] << "\t\t"<< check_result(score[i]) << endl;
	}
	cout <<"---------------------------------------\n";
	cout <<"Max score     = " << max << endl;
	cout <<"Min score     = " << min << endl;
	cout <<"Total Score   = " << total << endl;
	cout <<"Average Score = " <<(float)total/4 << endl;
 system ("pause");
	return 0;
}

string check_result(int x){

	if (x >= 50)
	 return("pass");
	else 
	 return("failed");
	
}
