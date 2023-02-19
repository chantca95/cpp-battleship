//
//  Tile.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/18/23.
//

#include "Tile.hpp"
#include "GameUtil.hpp"
#include <iostream>

Tile::Tile() {}

void Tile::markTileWithShip(Ship* ship) {
    shipPtr = ship;
}

void Tile::markTileAsRevealed() {
    isRevealed = true;
}

void Tile::printTileForPublic() {
    char output = isRevealed ? (shipPtr == nullptr ? '-' : 'X') : '?';
    cout << output << ' ';
}

void Tile::printTileTransparently() {
    cout << (shipPtr == nullptr ? '-' : 'X') << ' ';
}
