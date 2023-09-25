#include <iostream>
#include <string>
using namespace std;
void input(int &nums,int quizz[10],int mid[10] ,int final[10]);
void Viewall(int &nums,int quizz[10],int mid[10] ,int final[10]);
void viewID(int &nums,int quizz[10],int mid[10] ,int final[10]);
int main(){
	int nums = 0;
	int  quizz[10], mid[10], final[10], menu;
do {	
	cout <<"===========================\n";
    cout <<"         MENU			   \n";
	cout <<"===========================\n";
    cout <<" 1.Input student records\n";
    cout <<" 2.View all student records\n";
    cout <<" 3.Show a student by ID\n";
    cout <<" 4.Exit\n";

	cout <<"Select menu :" ;
	cin >> menu ;

	if (menu == 1){
		input(nums,quizz, mid, final);
	}
	else if(menu == 2) {
		Viewall(nums,quizz, mid, final);

	}
	else if(menu == 3){
		viewID(nums,quizz, mid, final);
	}
	else if(menu == 4)
		cout <<"Exit..." <<endl;
}while (menu != 4);



return 0;
}

void input(int &nums,int quizz[10],int mid[10] ,int final[10]){

	cout <<"Input number of student :" ;
	cin >> nums;

	for (int i = 0;i < nums; i++){
		cout <<"number"<< i+1 << endl ;
		cout <<"Input Quiz :";
		cin >> quizz[i];
		cout <<"Input Midterm :";
		cin >> mid[i];
		cout <<"Input Final:";
		cin >> final[i];
	}
}

void Viewall(int &nums,int quizz[10],int mid[10] ,int final[10]){

	cout <<"--------------------------------------- "<< endl; 
	cout <<"StdID   Quiz    Midterm  Final\n";
	cout <<"--------------------------------------- "<< endl; 
	for(int i= 0 ; i < nums ; i++){
	cout << i+1 <<"\t" <<quizz[i] <<"\t" << mid[i] <<"\t" << final[i]<< endl;
	}
	cout <<"--------------------------------------- "<< endl; 
} 


void viewID(int &nums,int quizz[10],int mid[10] ,int final[10]){

	int id;
	cout <<"Input ID : ";
	cin >> id;
	for (int i = 0; i < nums; i++)
	{
		if(id == i+1){
			cout <<"--------------------------------------- "<< endl; 
			cout <<"StdID   Quiz    Midterm  Final\n";
			cout <<"--------------------------------------- "<< endl; 
			cout << i+1 <<"\t" <<quizz[i] <<"\t" << mid[i] <<"\t " << final[i]<< endl;
			cout <<"--------------------------------------- "<< endl; 
		}
		else{
			cout <<"Your ID is not found" << endl;
			break;
		}
	}
}