// Loops and Arrays

#include <bits/stdc++.h>
#include <array>

int main(){

    std::array<int, 11> mynums;
    for(int i = 0; i < mynums.size(); i++){
        mynums[i] = i * 2;
    }

    for(int element : mynums){
        std::cout << element << std::endl;
    }

    return 0;
}
