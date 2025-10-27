/** C++ Program to Check Leap Year
 *  A year consisting of 366 days instead of the usual 365 days is a leap year. 
 *  Every fourth year is a leap year in the Gregorian calendar system. 
*/

/*
A year is a leap year if one of the following conditions is satisfied:

The year is a multiple of 400.
The year is a multiple of 4 but not a multiple of 100.

The Algorithm to Check Leap Year is given below
The algorithm implements the conditions specified above to check for leap year.

if (year % 400 = 0)
        return true (Leap year)
else if (year % 100 != 0 and year % 4 = 0)
        return true (leap year)
 else
        return false (Not a leap year)
endif ladder

*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    int leapYear;
    cin >> leapYear;

    if (leapYear % 400 == 0){
        cout << "It's a leap year" << endl;
    } else if(leapYear % 4 == 0 && leapYear % 100 != 0) {
        cout << "It's a leap year" << endl;
    } else {
        cout << "It's not a leap year" << endl;
    }
    
    return 0;
}