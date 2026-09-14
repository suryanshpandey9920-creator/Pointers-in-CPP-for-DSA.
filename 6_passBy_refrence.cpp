// Showing the working of the pass by refrence funtion in CPP.
#include <iostream>
using namespace std;

void refrence ( int *pointer) {
    // using defrence to change the value of a 
    *pointer = 200 ; 
    cout << *pointer << "\n";
    cout << "Memory address = " << pointer << "\n";

    // using the defrence operator to add 26 in the value of a 
    *pointer+= 26; 
    
}

int main() {

    int a = 10;
    
    refrence(&a );
    cout << "value of a after pass by refrence using the defrence operator = "<< a ; 
}