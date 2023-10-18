#include <iostream>
#include "Game.h"

using namespace std;

int main() {
	Game game;
    Board board1;
    Board board2;

    
    if (board1 == board2) {
        std::cout << "board1 and board2 are identical." << std::endl;
    }
    else {
        std::cout << "board1 and board2 are different." << std::endl;
    }

    std::cin >> board1;
    std::cout << board1;

	return 0;
}