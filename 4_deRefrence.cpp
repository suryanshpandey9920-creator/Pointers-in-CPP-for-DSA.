// WAP to use the ( * ) De-Reference operator in CPP
#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "enter the value of a  : ";
    cin >> a;

    int *ptr = &a ;
    cout << "Value of a = " << a << "\n";

    // Defrence operator used here and changed the value of a 
    *ptr = 34;

    cout << "memory address of a = " << ptr << "\n";
    cout << "Value of a after using deRefrence operator : " << *ptr << "\n";
    // the <<  *ptr ; works as the derefrence operator 
    

    return 0;
}