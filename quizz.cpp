#include <iostream>
using namespace std;
int main ()
 
 {
 int mid,fi,total;
 float q1,q2,q3,qt;
 cout << "==========QUIZZES================ " << endl;
 cout << "Enter first quizz (10):";
 cin  >> q1;
 cout << "Enter second quizz(10):";
 cin  >> q2;
 cout << "Enter third quizz (10):";
 cin  >> q3;
 cout << "==========MID-TERM=============== " << endl;
 cout << "Enter mid term (40):";
 cin  >> mid;
 cout << "==========FINAL================== " << endl;
 cout << "Enter final (50):";
 cin  >> fi;

 qt = (q1+q2+q3)/3 ;
 cout << "Quizz Total:" << qt << endl;
 cout << "Mid term:" << mid << endl;
 cout << "Final:" << fi << endl;

 total = qt+mid+fi;
 cout << "Total:" << total << endl;
 cout << "Your score is" << ((total>=50)?"PASS" :"FAIL") << endl;


return 0;
}
