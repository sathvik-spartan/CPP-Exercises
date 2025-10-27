/** Write a Program to Find the Largest Among 3 Numbers.
 *  In this problem, you are given 3 numbers, and you have to find out which one is the largest.
*/

#include <bits/stdc++.h> // useful for competitive programming but dont push this to production.
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 and num1 > num3){
        cout << num1 << " is greater" << endl;
    } else if(num2 > num1 and num2 > num3){
        cout << num2 << " is greater" << endl;
    } else {
        cout << num3 << " is greater" << endl;
    }
    return 0;
}

// Checked all the edge cases, test cases pass check.