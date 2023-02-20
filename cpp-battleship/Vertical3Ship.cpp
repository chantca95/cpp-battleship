//
//  Vertical3Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/19/23.
//

#include "Vertical3Ship.hpp"
#include <iostream>

Vertical3Ship::Vertical3Ship() {
    segmentsRemaining = 3;
}

void Vertical3Ship::fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) {
    array[0] = coordinate - 10;
    array[1] = coordinate;
    array[2] = coordinate + 10;
}

bool Vertical3Ship::willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) {
    int row = GameUtil::getRowFromCoordinate(coordinate);
    return row < 1 || row > 8;
}

void Vertical3Ship::printShipPlacementInstructions() {
    cout << "You are now placing a vertical ship of height 3.\n";
    cout << "Choose a tile to place the ship, occupying the tile above it to the tile below it.\n";
    cout << "Ie. if you chose tile O, your ship would be placed on the X's and O.\n\n";
    cout << "- - - - -\n";
    cout << "- - X - -\n";
    cout << "- - O - -\n";
    cout << "- - X - -\n";
    cout << "- - - - -\n\n";
}
