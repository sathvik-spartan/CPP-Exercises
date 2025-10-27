/*
Q3. Write a Program to Print the ASCII Value of a Character.
In C++, each character has some ASCII value associated with it. In this problem, 
we have to print the ASCII value of the character in the console.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    char c;
    cout << "Enter any alphabet: " << endl;
    cin >> c;
    cout << "The ASCII value of " << c << " is " << int(c) << endl;
    return 0;
}

// So what's an ASCII Value ?

/*
ASCII values serve as a bridge between human-readable text and computer-readable binary code. 
Each character, whether it's a letter, number, or symbol, is assigned a unique ASCII value ranging from 0 to 127.
*/