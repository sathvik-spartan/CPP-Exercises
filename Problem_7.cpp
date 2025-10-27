/* 
What is 'Compound interest'? 

Compound interest is the addition of interest to the principal sum of a loan or deposit, or in other words, interest on interest. It is the result of reinvesting interest, rather than paying it out, so that interest in the next period is then earned on the principal sum plus previously-accumulated interest. Compound interest is standard in finance and economics.
Compound interest may be contrasted with simple interest, where interest is not added to the principal, so there is no compounding.
Compound Interest formula:

Formula to calculate compound interest annually is given by: 

Amount= P(1 + R/100)^t
Compound Interest = Amount - P
Where, 
P is principal amount 
R is the rate and 
T is the time span

Pseudo Code:

Input principal amount. Store it in some variable say principal.
Input time in some variable say time.
Input rate in some variable say rate.
Calculate Amount using formula, 
Amount = principal * (1 + rate / 100)time.
Calculate Compound Interest using Formula.
Finally, print the resultant value of CI.
Example:

Input: Principal (amount): 1200
                    Time: 2
                    Rate: 5.4
Output: Compound Interest = 133.099243

*/

// C++ Program To Find Compound Interest

#include <bits/stdc++.h>
using namespace std;

int main()
{
    double principal , rate , time;
    cout << "Enter the principal value: " << endl;
    cin >> principal;
    cout << "Enter the rate of interest: " << endl;
    cin >> rate;
    cout << "Enter the tenure(time): " << endl;
    cin >> time;

    double Amount = principal * ((pow((1 + rate / 100), time))); // pow,time = power of tenure(time)
    double compoundInterest = Amount - principal;

    cout << "Compound interest is " << compoundInterest;

    return 0;
}