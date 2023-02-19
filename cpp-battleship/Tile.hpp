//
//  Tile.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#ifndef Tile_hpp
#define Tile_hpp

#include <stdio.h>
#include "Ship.hpp"
class Tile {
public:
    Tile();
    void markTileWithShip(Ship* ship);
    void markTileAsRevealed();
    void printTileForPublic();
    void printTileTransparently();
    bool isRevealed = false;
    Ship* shipPtr = nullptr;
};
#endif /* Tile_hpp */
