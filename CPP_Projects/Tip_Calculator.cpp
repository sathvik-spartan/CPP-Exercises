// #include <iostream> -> Use this
#include <bits/stdc++.h> // Use this only for Competitive Programming (Uses all Libraries)
using namespace std;

int main(){

    double billAmount, tipPercentage, tipAmount, totalAmount;

    cout << "Enter the total bill amount: " << endl;
    cin >> billAmount;

    cout << "Enter the tip percentage you would like to leave: " << endl;
    cin >> tipPercentage;

    tipAmount = billAmount * (tipPercentage / 100);
    totalAmount = billAmount + tipAmount;

    cout << "You should tip: " << tipAmount << endl;
    cout << "Your total amount is: " << totalAmount << endl;

    return 0;
}

/*
What is a Tip Calculator?

A tip calculator is a simple tool that helps people calculate how much tip they should leave at a restaurant, café, or any service where tipping is expected.
It also helps split the total bill (including the tip) among multiple people if needed.
*/
