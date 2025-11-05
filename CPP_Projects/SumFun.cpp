// This directs the use of Sentinel Controlled Repetition.

#include <bits/stdc++.h>
using namespace std;

int main(){

    int sum = 0;
    int input;

    cout << "Enter a number (or a non negative number to quit): " << endl;
    cin >> input;

    while (input >= 0){
        sum += input;
        cout << "enter another number (or any negative number to quit): " << endl;
        cin >> input;
    }

    cout << "The sum of all entered values is: " << sum << endl;
    return 0;
}
