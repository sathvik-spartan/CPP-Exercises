#include <bits/stdc++.h>
using namespace std;

int main(){

    string fullName;
    string alias;
    int age;
    int agentLevel;
    string favoriteGadget;

    cout << "Enter your full name: " << endl;
    getline(cin, fullName);

    cout << "Enter your secret alias: " << endl;
    getline(cin, alias);

    cout << "Enter your age: " << endl;
    cin >> age;

    cin.get(); // you can also use cin.ignore();

    cout << "Enter your agent level (1 to 10): " << endl;
    cin >> agentLevel;

    cin.get();

    cout << "Enter your favorite gadget: " << endl;
    getline(cin, favoriteGadget);

    // Print out the outputs below

    return 0;
}
