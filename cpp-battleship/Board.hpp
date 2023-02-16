//
//  Board.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#ifndef Board_hpp
#define Board_hpp

#include <stdio.h>
#include <string>
using namespace std;

class Board {
public:
    Board();
    void printBoard();
    void placeShipOnBoardAt(int, int);
    void markRemainingSquaresSafe();
private:
    char grid[10][10];
};

#endif /* Board_hpp */
