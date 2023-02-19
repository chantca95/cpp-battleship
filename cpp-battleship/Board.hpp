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
#include "Tile.hpp"
#include "Ship.hpp"
using namespace std;

class Board {
public:
    Board();
    void printBoardForPublic();
    void printBoardTransparently();
    void printEndingBoard();
    void placeShipOnBoardAt(int, Ship*);
    int registerAttackOnBoardAtGivenCoordinate(int coordinate);
    int numShipsRemaining;
private:
    Tile grid[10][10];
};

#endif /* Board_hpp */
