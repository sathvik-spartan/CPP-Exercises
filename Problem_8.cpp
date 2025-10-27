/** Write a Program to Check Even or Odd Integers.
 *  In this problem, we have to simply check whether the given integer is odd or even and print the output on the console.
 */

 #include <bits/stdc++.h>
 using namespace std;

 int main(){
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    if (num % 2 == 0){
        cout << "The number is even" << endl;
    } else {
        cout << "The number is odd" << endl;
    }
    return 0;
 }