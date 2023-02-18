//
//  Ship.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Ship.hpp"

Ship::Ship() {
    this -> isDestroyed = false;
}

void Ship::damageSegment() {
    this -> segmentsRemaining--;
    if (segmentsRemaining == 0) {
        this -> isDestroyed = true;
    }
}
