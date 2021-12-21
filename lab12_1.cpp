// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include <iostream>
#include <cstdlib>
using namespace std ;


int main ( ) {

    srand(time(0));
    string Q[] = {"A", "B+", "B", "C+", "C", "D+", "D", "F", "W"} ;
    string y = Q[rand()%9+1] ;

    cout << "Press Enter 3 times to reveal your future.\n"; 
    cin.get() ;
    cin.get() ;
    cin.get() ;
    
    cout << "You will get " << y << " in this 261102.";
    
    return 0 ;
}