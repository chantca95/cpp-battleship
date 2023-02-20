//
//  Horizontal3Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Horizontal3Ship.hpp"

Horizontal3Ship::Horizontal3Ship() {
    segmentsRemaining = 1;
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
