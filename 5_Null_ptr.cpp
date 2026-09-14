// WAP to Show the Working of the Null Pointer in CPP
#include <iostream>
using namespace std;

int main() {
    int *ptr ;
    cout << "Pointer ptr storing a garbage value  = " << ptr  << "\n \n"; 

    // Creating a null pointer 
    int *pointer = NULL ;
    cout << "Pointer having Null value = " << pointer << "\n";
    cout << *pointer ;

    return 0;
}