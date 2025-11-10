// Write a Program to Check Whether a Number Is Prime or Not.
/*
The number can be prime or non-prime based on the number of its factors. 
In this program, we have to check whether the given number is prime or not and print the result on the console screen.

NOTE THAT - A Prime Number is a natural number greater than 1 that has no positive divisors other than 1 and itself.
*/

#include <iostream> 

int main(){

    int num;
    int count = 0;
    std::cout << "Enter a number to check whether the number is prime or not: " << std::endl;
    std::cin >> num;

    if (num <= 1){
        std::cout << num << "It's not a Prime" << std::endl;
    } else {
        for(int i = 1; i <= num; i++){
            if(num % i == 0){
                count++;
            }
        }

        if (count > 2) {
            std::cout << num << " is not a Prime" << std::endl;
        } else {
            std::cout << num << " is a Prime" << std::endl;
        }
    }

    return 0;
}
