// WAP to point the other pointers 
#include <iostream>
using namespace std;

int main() {

    int a = 34 ;
    int b = 22 ;

    int *pointer1 = &a;
    int *pointer2 = &b;

    pointer2 = pointer1 ; 
    cout << pointer1  << " = " << pointer2;

    return 0;
}