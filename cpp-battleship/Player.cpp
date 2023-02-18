//
//  Player.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "Player.hpp"
#include "GameUtil.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Player::Player(string name) {
    this -> name = name;
    this -> board = Board();
    // Just randomly populate boards, we will replace this later on by asking for user input
    srand((unsigned) time(NULL));
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
    board.placeShipOnBoardAt(rand() % 100 + 1);
}

void Player::printVisibleBoard() {
    cout << "Player " << name << "'s board looks like this:\n\n";
    board.printBoardForPublic();
}

void Player::printHiddenBoard() {
    cout << "Player " + name + "'s UNCOVERED board looks like this (DEBUG ONLY):\n\n";
    board.printBoardTransparently();
}

char Player::registerAttackOnBoardAtGivenCoordinate(int coordinate) {
    return board.registerAttackOnBoardAtGivenCoordinate(coordinate);
}
