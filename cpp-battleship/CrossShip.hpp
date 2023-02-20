//
//  CrossShip.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/19/23.
//

#ifndef CrossShip_hpp
#define CrossShip_hpp

#include <stdio.h>
#include "Ship.hpp"
#include "GameUtil.hpp"

class CrossShip : public Ship {
public:
    CrossShip();
    void fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]) override;
    bool willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate) override;
    void printShipPlacementInstructions() override;
};
#endif /* CrossShip_hpp */
