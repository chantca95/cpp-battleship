//
//  Horizontal3Ship.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#ifndef Horizontal3Ship_hpp
#define Horizontal3Ship_hpp

#include <stdio.h>
#include "Ship.hpp"
#include "GameUtil.hpp"

class Horizontal3Ship : public Ship {
public:
    Horizontal3Ship();
    void fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) override;
    bool willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) override;
    void printShipPlacementInstructions() override;
};

#endif /* Horizontal3Ship_hpp */
