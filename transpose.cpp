#include<iostream>
#include<string>
using namespace std;
int main(){ 
	int num[2][3] ;
	string name[3];

	cout <<"Enter Array 2D 2x3 " << endl;
	for(int i=0; i<2; i++){
		for(int j=0; j<3;j++){
			cin >> num[i][j];
		}
	}
	cout <<"Transpose Matrix 2D 2x3" << endl;
	for(int r=0; r<3; r++){
		for(int c=0; c<2; c++){
			cout << num[c][r] <<"\t";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
