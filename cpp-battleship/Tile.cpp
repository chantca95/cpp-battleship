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

void Tile::markTileWithShip(Ship ship) {
    this -> shipPtr = &ship;
}

void Tile::markTileAsRevealed() {
    this -> revealed = true;
}

void Tile::printTileForPublic() {
    char output = this -> revealed ? (this -> shipPtr == nullptr ? '-' : 'X') : '?';
    cout << output << ' ';
}

void Tile::printTileTransparently() {
    cout << (this -> shipPtr == nullptr ? '-' : 'X') << ' ';
}
