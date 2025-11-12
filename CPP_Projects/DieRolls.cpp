/*
For this challenge you'll create a project named DieRolls and simulate 10 rolls of a die (singular for dice).
You'll also have to print the result after every roll.
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

    srand(time(nullptr));

    int dieValue;
    int value;
    std::cout << "Enter how many times the die has to be rolled: " << std::endl;
    std::cin >> value;

    for(int i = 0; i < value; i++){
        dieValue = rand() % 6 +1;
        std::cout << "Roll "<< (i + 1) << " : " << dieValue << std::endl;
    }

    return 0;
}
