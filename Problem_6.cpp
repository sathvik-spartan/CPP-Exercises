/** Q6. Write a Program to Find Simple Interest.
 *  In this problem, 
 *  you have to write a program that calculates and prints the simple interest for the given Principle, Rate of Interest, and Time.
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    double principle, rate, time;
    cout << "Enter the principle value: " << endl;
    cin >> principle;

    cout << "Enter the rate of interest: " << endl;
    cin >> rate;

    cout << "Enter the tenure (time): " << endl;
    cin >> time;

    double Simple_Interest = (principle * rate * time) / 100;

    cout << "The calculated Simple Interest is: " << Simple_Interest << endl;

    return 0;
}