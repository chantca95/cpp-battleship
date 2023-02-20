//
//  Horizontal3Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Horizontal3Ship.hpp"
#include <iostream>

Horizontal3Ship::Horizontal3Ship() {
    segmentsRemaining = 3;
}

void Ship::fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) {
    array[0] = coordinate - 1;
    array[1] = coordinate;
    array[2] = coordinate + 1;
}

bool Ship::willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) {
    int col = GameUtil::getColFromCoordinate(coordinate);
    return col < 1 || col > 8;
}

void Ship::printShipPlacementInstructions() {
    cout << "You are now placing a horizontal ship of width 3.\n";
    cout << "Choose a tile to place the ship, occupying the tile behind it to the tile ahead of it.\n";
    cout << "Ie. if you chose tile O, your ship would be placed on the X's and O.\n\n";
    cout << "- - - - -\n";
    cout << "- - - - -\n";
    cout << "- X O X -\n";
    cout << "- - - - -\n";
    cout << "- - - - -\n\n";
}
