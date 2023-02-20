//
//  Ship.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#ifndef Ship_hpp
#define Ship_hpp

#include <stdio.h>
#include <string>

using namespace std;

class Ship {
public:
    Ship();
    int damageSegment();
    bool isDestroyed;
    int segmentsRemaining;
    virtual void fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]);
    virtual bool willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate);
    virtual void printShipPlacementInstructions();
};
#endif /* Ship_hpp */
