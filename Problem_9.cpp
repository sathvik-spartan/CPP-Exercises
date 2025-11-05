/** Write a Program to Find the Largest Among 3 Numbers.
 *  In this problem, you are given 3 numbers, and you have to find out which one is the largest.
*/

#include <bits/stdc++.h> // useful for competitive programming but dont push this to production.
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter 3 numbers: " << endl;
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3){
        cout << num1 << " is greater" << endl;
    } else if(num2 >= num1 && num2 >= num3){
        cout << num2 << " is greater" << endl;
    } else {
        cout << num3 << " is greater" << endl;
    }
    return 0;
}

// Alt code is given here (Choose this for interviews)

#include <bits/stdc++.h> // useful for competitive programming but dont push this to production.
using namespace std;

int main(){
    int num1, num2, num3;
    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    int mx = num1;

    if(num2 > mx) mx = num2;
    if(num3 > mx) mx = num3;

    cout << mx << " is the greatest" << endl;

    return 0;
}

// Alt code is show below (using functions)

#include <bits/stdc++.h>
using namespace std;

void got(int a, int b, int c){

    if(a >= b && a >= c){
        cout << a << " is greater" << endl;
    } else if (b >= a && b >= c){
        cout << b << " is greater" << endl;
    } else {
        cout << c << " is greater" << endl;
    }
}

int main(){

    int x;
    cout << "Enter the first number: " << endl;
    cin >> x;

    int y;
    cout << "Enter the secong number: " << endl;
    cin >> y;

    int z;
    cout << "Enter the third number: " << endl;
    cin >> z;

    got(x,y,z);

    return 0;
}



