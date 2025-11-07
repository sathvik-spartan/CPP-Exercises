/*
We shall write a program named Streaming Calculator to calculate a user's monthly total based on: 
1. The package they selected (Basic, Standard, or Premium)
2. The number of simultaneous streams they used this month

The streaming plans are as follows: 

1. Package A (Basic): 
- $9 a month
- Includes one device 
- Each additional device: $6

2. Package B (Standard):
- $14 a month
- Includes 3 devices
- Each additional device: $4

3. Package C (Premium):
- $20 a month
- Includes 5 devices
- Each additional device: $2

In the Program, you will prompt the user for: 
- Their Package (A, B, OR C)
- How many simultaneous devides they used

*/

#include <bits/stdc++.h>

int main(){

    char package;
    int numDevices;
    int totalCost = 0;

    int devicesOver = 0;
    const int INCLUDED_A = 1;
    const int INCLUDED_B = 3;
    const int INCLUDED_C = 5;

    const int BASE_A = 9;
    const int BASE_B = 14;
    const int BASE_C = 20;

    const int EXTRA_A = 6;
    const int EXTRA_B = 4;
    const int EXTRA_C = 2;

    std::cout << "Welcome to the streaming Subscription Calculator !" << std::endl;
    std::cout << "Enter your package (A, B or C): " << std::endl;
    std::cin >> package;

    std::cout << "Enter the number of simultaneous devices used: " << std::endl;
    std::cin >> numDevices;

    if (package == 'A' || package == 'a'){
        totalCost += BASE_A;
        if (numDevices > INCLUDED_A){
            devicesOver = numDevices - INCLUDED_A;
            totalCost += devicesOver * EXTRA_A;
        }

    } else if (package == 'B' || package == 'b') {
        totalCost += BASE_B;
        if (numDevices > INCLUDED_B){
            devicesOver = numDevices - INCLUDED_B;
            totalCost += devicesOver * EXTRA_B;
        }

    } else if (package == 'C' || package == 'c') {
        totalCost += BASE_C;
        if (numDevices > INCLUDED_C){
            devicesOver = numDevices - INCLUDED_C;
            totalCost += devicesOver * EXTRA_C;
        }

    } else {
        std::cout << "Invalid Package Selection" << std::endl;
        return 0;
    }

    std::cout << "Your total cost for the month is: $" << totalCost << std::endl;
    return 0;
}
