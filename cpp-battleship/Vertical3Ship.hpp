//
//  Vertical3Ship.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/19/23.
//

#ifndef Vertical3Ship_hpp
#define Vertical3Ship_hpp

#include <stdio.h>
#include "Ship.hpp"
#include "GameUtil.hpp"

class Vertical3Ship : public Ship {
public:
    Vertical3Ship();
    void fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) override;
    bool willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) override;
    void printShipPlacementInstructions() override;
};
#endif /* Vertical3Ship_hpp */
