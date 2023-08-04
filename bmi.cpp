#include <iostream>
#include <string>
using namespace std;
int main()
{    
    float high,bmi,weight;
	string sex;
    cout << "Enter  Age : " ;
	cin  >> sex;

    cout << "Enter Weight : " ;
    cin >>  weight;
    cout << "Enter High : " ;
    cin >>  high;
	cout << "********Output********\n"  ;

	bmi = weight/(high/100 * high/100);
    cout << "BMI = " <<  bmi  << endl ;



	if(bmi<16){
	cout << "Severe Thinness" << endl;
	}

	else if (bmi>=16 && bmi <=17) {        
	cout << "Moderate Thinness" << endl;
	} 

	else if (bmi>=17&& bmi <=18.5) { 
	cout << "Mild Thinness" << endl;
	} 

	else if (bmi>=18.5&& bmi <=25)  {
	cout << "Normal" << endl;
	} 

	else if (bmi>=25&& bmi<=30)  {
	cout << "Overweight" << endl;
	} 

	else if (bmi>=30&& bmi<=35)  {
	cout << "Obese Class I" << endl;
	} 

	else if (bmi>=35&& bmi<=40)  {
	cout << "Obese Class II" << endl;
	} 

	else if (bmi>40)  {
	cout << "Obese Class III" << endl;
	} 


    return (0);
}
