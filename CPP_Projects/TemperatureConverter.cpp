// Formula : C = (F - 32) * 5 / 9

#include<iostream>
#include<array>
int main(){

    const int NUM_DAYS = 7;
    std::array<int, NUM_DAYS> fahrenheitTemps;

    for(int i = 0; i < NUM_DAYS; i++){
        std::cout << "Enter the temperature in fahrenheit for day " << (i + 1) << " : " << std::endl;
        std::cin >> fahrenheitTemps[i];
    }

    std::cout << "\nHere are the temperatures converted to Celsius:" << std::endl;

    for(double tempF : fahrenheitTemps){
        double tempC = (tempF - 32) * 5.0 / 9;
        std::cout << "F: " << tempF << " -> C: " << tempC << std::endl;
    }

    return 0;
}
