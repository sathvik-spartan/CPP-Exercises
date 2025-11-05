// Driver's license eligibility 

#include <bits/stdc++.h>
using namespace std;

int main(){

    int age;
    cout << "Enter your age: " << endl;
    cin >> age;
    cout << "Your age is: " << age << endl;

    if (age >= 18){
        cout << "You are eligible for a driver's license" << endl;
    } else {
        cout << "You are NOT eligible for a driver's license" << endl;
    }

    return 0;
}
