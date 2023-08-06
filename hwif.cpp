#include <iostream>
#include <string>
using namespace std;

int main ()
{
    char  Char1 ,Char2 ,Char3 ;
    int a=0, b=0, c=0;
    cout <<"Enter Character (A,B,C) : " ;
    cin >> Char1;
    cout <<"Enter Character (A,B,C) : " ;
    cin >> Char2;
    cout <<"Enter Character (A,B,C) : " ;
    cin >> Char3    ;
    
     if (Char1 == 'A' )   
    a+=10;
    else if (Char1 =='B') 
    a+=20;
    else if (Char1 == 'C')
    a+=30;
      
     if (Char2 == 'A' )   
    b+=10;
    else if (Char2 =='B') 
    b+=20;
    else if (Char2 == 'C')
    b+=30;
    
    if (Char3 ==  'A' )   
    c+=10;
    else if (Char3 =='B') 
    c+=20;
    else if (Char3 == 'C')
    c+=30;

    cout << Char1  << " = " <<  a << " , " << Char2  << " = " << b << " , " << Char3 << " = " << c << endl ;
    cout << Char1 << " + " << Char2 << " + " << Char3 << " = "   ;
    cout << a << " + " << b << " + " << c << " = "<< a+b+c << endl;  


return 0;
}

