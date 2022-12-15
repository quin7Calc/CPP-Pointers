//
//  main.cpp
//  Chapter 12 Program
//
//  Created by Quintan Calvert on 11/13/22.
//
// Program to demonstrate Pointers. I am keeping this program very simple.

#include <iostream>
#include <string>

using namespace std;

int main() {

    cout << "Program to show how pointers work." << endl;
    
    int *p; // This declares a pointer p. This pointer points to a memory address that stores          data of type int.
    int num;
    
    cout << "Enter an integer: ";
    cin >> num;
    cout << endl << endl;
    
    cout << "The value of num is now " << num << endl << endl;
    
    p = &num; // The value of P is now the address of num
    
    cout << "The value of P is now the address of num" << endl << endl;
    
    cout << "The Value of P is " << p << endl << endl;
    cout << "The value of num is " << *p << endl << endl;
    
    cout << "P contains the address of the variable, Num.  That address is " << p;
    cout << "At that address is the value of num, which is " << num << endl << "To access the value of num you could either type num or *p, which means the area that p points to.";
    
    cout << endl << endl;
    
    return 0;
}
