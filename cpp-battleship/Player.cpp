//
//  Player.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "Player.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Player::Player(string name) {
    this -> name = name;
    this -> visibleBoard = Board();
    this -> hiddenBoard = Board();
    // Just randomly populate boards, we will replace this later on by asking for user input
    srand((unsigned) time(NULL));
    hiddenBoard.placeShipOnBoardAt(rand() % 2, rand() % 2);
    hiddenBoard.placeShipOnBoardAt(rand() % 2 + 2, rand() % 2 + 2);
    hiddenBoard.placeShipOnBoardAt(rand() % 2 + 4, rand() % 2 + 4);
    hiddenBoard.placeShipOnBoardAt(rand() % 2 + 6, rand() % 2 + 6);
    hiddenBoard.placeShipOnBoardAt(rand() % 2 + 8, rand() % 2 + 8);
    hiddenBoard.markRemainingSquaresSafe();
}

void Player::printVisibleBoard() {
    cout << "Player " + name + "'s board looks like this:\n\n";
    visibleBoard.printBoard();
}

void Player::printHiddenBoard() {
    cout << "Player " + name + "'s UNCOVERED board looks like this:\n\n";
    hiddenBoard.printBoard();
}
