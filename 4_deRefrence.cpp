// WAP to use the ( * ) De-Reference operator in CPP
#include <iostream>
using namespace std;

int main() {

    int a;
    cout << "enter the value of a  : ";
    cin >> a;

    int *ptr = &a ;

    cout << "Value of a = " << a << "\n";
    cout << "memory address of a = " << ptr << "\n";
    cout << "Defrence operator used here : " << *ptr << "\n";
    // the <<  *ptr ; works as the derefrence operator 
    

    return 0;
}