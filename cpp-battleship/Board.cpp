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
    numShipsRemaining = numShipsToPlace;
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

void Board::placeShipOnBoardAt(int coordinate, Ship* ship) {
    grid[GameUtil::getRowFromCoordinate(coordinate)][GameUtil::getColFromCoordinate(coordinate)].markTileWithShip(ship);
}

int Board::registerAttackOnBoardAtGivenCoordinate(int coordinate) {
    int row = GameUtil::getRowFromCoordinate(coordinate);
    int col = GameUtil::getColFromCoordinate(coordinate);
    grid[row][col].markTileAsRevealed();
    if (grid[row][col].shipPtr != nullptr) {
        int status = grid[row][col].shipPtr->damageSegment();
        if (status == SHIP_DESTROYED) {
            numShipsRemaining -= 1;
            cout << "Player " << GameUtil::next->name << " has " << numShipsRemaining << " ships remaining\n\n";
        }
        return status;
    } else {
        return SHIP_MISSED;
    }
}
