// Wap to demonstrate the pointer and the memory address stored in the pointer
#include <iostream>
using namespace std;

int main() {

    int  a = 23 ;
    int  *pointer = &a;

    cout << "value of a is : " << a  << endl ;
    cout << "value of  pointer is  : " << pointer << endl;
    return 0;
}
