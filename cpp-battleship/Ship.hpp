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
    void fillCoordinatesCoveredByShipAtCenterCoordinate(int coordinate, int array[]);
    bool willShipBeOutOfBoundsWhenCenteredAtCoordinate(int coordinate);
};
#endif /* Ship_hpp */
