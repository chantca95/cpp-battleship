//
//  CrossShip.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/19/23.
//

#include "CrossShip.hpp"
#include <iostream>

CrossShip::CrossShip() {
    segmentsRemaining = 5;
}

void CrossShip::fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) {
    array[0] = coordinate - 10;
    array[1] = coordinate - 1;
    array[2] = coordinate;
    array[3] = coordinate + 1;
    array[4] = coordinate + 10;
}

bool CrossShip::willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) {
    int row = GameUtil::getRowFromCoordinate(coordinate);
    int col = GameUtil::getColFromCoordinate(coordinate);
    return row < 1 || row > 8 || col < 1 || col > 8;
}

void CrossShip::printShipPlacementInstructions() {
    cout << "You are now placing a Cross ship of height 3 and width 3.\n";
    cout << "Choose a tile to place the ship, occupying the tile and the tiles above, below, before and after it.\n";
    cout << "Ie. if you chose tile O, your ship would be placed on the X's and O.\n\n";
    cout << "- - - - -\n";
    cout << "- - X - -\n";
    cout << "- X O X -\n";
    cout << "- - X - -\n";
    cout << "- - - - -\n\n";
}
