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

void Tile::markTileWithShip() {
    this -> status = 'X';
}

void Tile::markTileAsRevealed() {
    this -> revealed = true;
}

void Tile::printTileForPublic() {
    char output = this -> revealed ? this -> status : '?';
    cout << output << ' ';
}

void Tile::printTileTransparently() {
    cout << this -> status << ' ';
}
