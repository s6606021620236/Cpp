#include <iostream>
using namespace std; 

int main()
{
 int score ;
 cout <<"Input C++ score = " ;
 cin >> score;
 cout <<"Your " << ((score>=50)?" pass ": "fail ") <<  "with score " << score << endl;

return 0;
}