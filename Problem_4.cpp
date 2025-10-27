/** Write a Program to Swap Two Numbers.
 * 
 * You have to create a program that swaps the value of two number variables. 
 * It means that the value of the first variable will be stored in the second variable and the value of the second variable should be stored in the first variable.
 */

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a = 3;
    int b = 5;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << a << " " << b << endl;
    return 0;
}

// Alt way to do it without using 3rd variable.

/*
    b = a + b;
    a = b - a;
    b = b - a;
*/

// Alt way to do it with swap function
// swap(a,b)