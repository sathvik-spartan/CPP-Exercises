// Write a Program to Swap Two Numbers Using a Function.
/*
In this program, you have to swap the values of two variables using another function.
*/

#include <bits/stdc++.h>
using namespace std;

void swapFunc(int &a, int &b) // Write the logic here
{
    int temp = a;
    a = b;
    b = temp;  
}

int main() // Perform the output operations here
{

    int x;
    cout << "Enter x value: " << endl;
    cin >> x;

    int y;
    cout << "Enter y value: " << endl;
    cin >> y;

    cout << "before: x=" << x << " y=" << y << "\n";

    swapFunc(x, y); // call the function 

    cout << "after:  x=" << x << " y=" << y << "\n";
    
    return 0;
    
}
