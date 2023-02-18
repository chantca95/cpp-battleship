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
    void damageSegment();
    bool isDestroyed;
    int segmentsRemaining;
};
#endif /* Ship_hpp */
