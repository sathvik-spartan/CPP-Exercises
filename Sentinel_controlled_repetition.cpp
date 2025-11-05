// Sentinel Controlled Repetition
// It means keep looping until you read a "special sentinel" value that means stop.

#include <bits/stdc++.h>
using namespace std;

int main(){

    int num1;
    cout << "Enter a number (or a negative number to quit): " << endl;
    cin >> num1;

    while (num1 >= 0){
        cout << "You entered " << num1 << endl;
        cout << "Enter another number: " << endl;
        cin >> num1; // Loops until user entered a negative number 
    }

    return 0;
}

/*
Note that sentinel can be anything such as zero, -1, “stop”, empty line, EOF(End Of File)
*/

