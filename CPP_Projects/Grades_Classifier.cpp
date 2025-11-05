#include <bits/stdc++.h>
using namespace std;

int main(){

    char Grade;
    cout << "Enter your grade(A - F): ";
    cin >> Grade;

    switch (Grade){
        case 'A':
        case 'a':
        cout << "Great" << endl;
        break;

        case 'B':
        case 'b':
        cout << "Good" << endl;
        break;

        case 'C':
        case 'c':
        cout << "Could perform better" << endl;
        break;

        case 'D':
        case 'd':
        cout << "Pass" << endl;
        break;

        case 'E':
        case 'e':
        cout << "Just Pass" << endl;
        break;

        case 'F':
        case 'f':
        cout << "Fail" << endl;
        break;

        default :
        cout << "Invalid" << endl;
    }
    return 0;
}

// This program handles lowercase and uppercase effectively
