/** Q5. Write a Program to Find the Size of int, float, double, and char.
 *  In C++, each datatype requires some memory to store data. 
 * In this program, 
 * you have to print the required memory (i.e. size in bytes) for int, float, double, and char data types on the console.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int myInt;
    char myChar;
    float myFloat;
    bool myBool;
    long myLong;
    double myDouble;
    string myString;

    cout << "The Memory Usage of Int is: " << sizeof(myInt) << endl;
    cout << "The Memory Usage of Char is: " << sizeof(myChar) << endl;
    cout << "The Memory Usage of Float is: " << sizeof(myFloat) << endl;
    cout << "The Memory Usage of Boolean is: " << sizeof(myBool) << endl;
    cout << "The Memory Usage of String is: " << sizeof(myString) << endl;
    cout << "The Memory Usage of Long is: " << sizeof(myLong) << endl;
    cout << "The Memory Usage of Double is: " << sizeof(myDouble) << endl;

    return 0;
}
