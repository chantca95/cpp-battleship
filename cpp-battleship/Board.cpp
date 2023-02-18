//
//  Board.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "Board.hpp"
#include "GameUtil.hpp"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = Tile();
        }
    };
}

void Board::printBoardForPublic() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j].printTileForPublic();
        }
        cout << '\n';
    };
    cout << '\n';
}

void Board::printBoardTransparently() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j].printTileTransparently();
        }
        cout << '\n';
    };
    cout << '\n';
}

void Board::placeShipOnBoardAt(int coordinate) {
    grid[GameUtil::getRowFromCoordinate(coordinate)][GameUtil::getColFromCoordinate(coordinate)].markTileWithShip();
}

char Board::registerAttackOnBoardAtGivenCoordinate(int coordinate) {
    int row = GameUtil::getRowFromCoordinate(coordinate);
    int col = GameUtil::getColFromCoordinate(coordinate);
    grid[row][col].markTileAsRevealed();
    
    return grid[row][col].status;
}
