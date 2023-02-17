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
    void placeShipOnBoardAt(int);
    void markRemainingTilesSafe();
    char getTileStatus(int row, int col);
    void markTileWithStatus(int row, int col, char status);
private:
    char grid[10][10];
};

#endif /* Board_hpp */
