//
//  Player.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "Player.hpp"
#include "GameUtil.hpp"
#include <iostream>
#include "Horizontal3Ship.hpp"

using namespace std;

Player::Player(string name) {
    this->name = name;
    board = Board();
}

void Player::printVisibleBoard() {
    cout << "Player " << name << "'s board looks like this:\n\n";
    board.printBoardForPublic();
}

void Player::printHiddenBoard() {
    cout << "Player " + name + "'s UNCOVERED board looks like this (DEBUG ONLY):\n\n";
    board.printBoardTransparently();
}

void Player::printEndingBoard() {
    cout << "Player " << name << "'s VISIBLE vs UNCOVERED board looks like this:\n\n";
    board.printEndingBoard();
}

int Player::registerAttackOnBoardAtGivenCoordinate(int coordinate) {
    return board.registerAttackOnBoardAtGivenCoordinate(coordinate);
}

void Player::placeShipOnBoardAtCoordinate(Ship* ship, int coordinate) {
    board.placeShipOnBoardAt(coordinate, ship);
}

bool Player::hasNoShipsRemaining() {
    return board.numShipsRemaining == 0;
}
