/*
The game logic works as follows: 
1. Rock beats Scissors
2. Scissors beats Paper
3. Paper beats rock

if players choose the same move, then it's a tie
*/

#include<iostream>
#include<cstdlib>
#include<ctime>

int main(){

    char computerMove;
    char userMove;

    srand(time(nullptr));

    std::cout << "Welcome to Rock Paper Scissors" << std::endl;
    std::cout << "Choose a move (R, P or S) : " << std::endl;
    std::cin >> userMove;

    int randNum = rand() % 3;

    if(randNum == 0){
        computerMove = 'R';
    } else if (randNum == 1){ 
        computerMove = 'P';
    } else {
        computerMove = 'S';
    }

    std::cout << "Computer played: " << computerMove << std::endl;
    std::cout << "You played: " << userMove << std::endl;

    if(userMove == computerMove){
        std::cout << "It's a tie!" << std::endl;
    } 
    else if
    (
           ((userMove == 'R' || userMove == 'r') && (computerMove == 'S' || computerMove == 's')) ||
           ((userMove == 'S' || userMove == 's') && (computerMove == 'P' || computerMove == 'p')) || 
           ((userMove == 'P' || userMove == 'p') && (computerMove == 'R' || computerMove == 'r'))
    ) {
        std::cout << "You win!" << std::endl;
    } else {
        std::cout << "Computer wins!" << std::endl;
    }
    return 0;
}
