// WAP to show the refrence variable in CPP
#include <iostream>
using namespace std;
int main() {
    int num1 = 23;
    int &num2 = num1;
    
    // Here the num2 is having memory address of num1  
    num2 = 34;
    cout << num2 << endl;
    cout << num1 << endl;
    return 0;
}