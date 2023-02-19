//
//  Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Ship.hpp"
#include <iostream>

Ship::Ship() {
    isDestroyed = false;
}

void Ship::damageSegment() {
    segmentsRemaining -= 1;
    if (segmentsRemaining == 0) {
        isDestroyed = true;
        cout << "*** SHIP DESTROYED!!! ***\n\n";
    }
}
