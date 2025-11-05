#include <bits/stdc++.h>
using namespace std;

int main(){

    char Grade;
    cout << "Enter your grade(A - F): ";
    cin >> Grade;

    switch (Grade){
        case 'A':
        cout << "Great" << endl;
        break;

        case 'B':
        cout << "Good" << endl;
        break;

        case 'C':
        cout << "Could perform better" << endl;
        break;

        case 'D':
        cout << "Pass" << endl;
        break;

        case 'E':
        cout << "Just Pass" << endl;
        break;

        case 'F':
        cout << "Fail" << endl;
        break;

        default :
        cout << "Invalid" << endl;
    }
    return 0;
}
