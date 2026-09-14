// WAP to store the memory address of another pointer 
#include <iostream>
using namespace std;

int main() {

    int a = 1055;

    int *ptr = &a ;    // here *ptr got the memory address of variable a 

    int **pptr = &ptr;  //here **pptr got the memory address of the pointer 
    
    cout << a << endl;
    cout << ptr << endl;
    cout << &ptr <<  " = " <<  pptr << endl;
    // Printing the memory address of pointer ptr and the variable's memory address.
    
    return 0;

}