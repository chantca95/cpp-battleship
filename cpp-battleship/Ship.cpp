//
//  Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Ship.hpp"
#include <iostream>
#include "GameUtil.hpp"

Ship::Ship() {
    isDestroyed = false;
}

int Ship::damageSegment() {
    segmentsRemaining -= 1;
    if (segmentsRemaining == 0) {
        isDestroyed = true;
        cout << "*** SHIP DESTROYED!!! ***\n\n";
        return SHIP_DESTROYED;
    } else {
        return SHIP_HIT;
    }
}

void Ship::fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) {}
bool Ship::willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) {
    return false;
}
void Ship::printShipPlacementInstructions() {}
