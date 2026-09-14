#include <iostream>
using namespace std;

int main() {

    int a = 32;
    int *ptr = &a;

    char ch  = 'A';
    char *cho = &ch ; 

    // Assigning values of variable ( a ) to cho pointer using the 
    // DeRefrence operator   
    *cho += a ;
    
    *ptr += ch; 
    cout << a  <<  "  ,  " << ch << endl;

    return 0;
}