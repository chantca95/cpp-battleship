//
//  Tile.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#ifndef Tile_hpp
#define Tile_hpp

#include <stdio.h>
class Tile {
public:
    Tile();
    void markTileWithShip();
    void markTileAsRevealed();
    void printTileForPublic();
    void printTileTransparently();
    char status = '-';
    bool revealed = false;
};
#endif /* Tile_hpp */
