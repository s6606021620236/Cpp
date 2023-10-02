#include<iostream>
#include<string>
using namespace std;
void display(int num[3][3],string name[3]);
int main(){ 
	int num[3][3] ;
	string name[3];
	for(int i=0; i<3;i++){
		cout <<"Student "<< i+1 <<endl;
		cout <<"Name [" << i+1 <<"] : ";
		cin>>name[i];
	
		for (int j=0; j<3; j++){
			cout <<"Enter Score [" << i+1 <<"]["<< j+1 <<"] :";
			cin >> num [i][j];
		}
	}
	display(num,name);
	system("pause");
	return 0;
}
	

void display(int num[3][3],string name[3]){
	cout <<"Show Score" <<endl;	
	cout <<"---------------------------------\n" ;
	cout <<"Student\tMath\tScience\tEnglish\n";
	cout <<"---------------------------------\n"  ;
	for(int r = 0; r<3; r++ ){
		cout << r+1 <<"   " << name[r] <<"\t" ;
		for(int c = 0 ;c<3; c++){
			cout << num[r][c] <<"\t";
		}
		cout << endl;
	}
	
}
