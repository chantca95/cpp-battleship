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
    this -> visibleBoard = Board();
    this -> hiddenBoard = Board();
    // Just randomly populate boards, we will replace this later on by asking for user input
    srand((unsigned) time(NULL));
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.placeShipOnBoardAt(rand() % 100 + 1);
    hiddenBoard.markRemainingTilesSafe();
}

void Player::printVisibleBoard() {
    cout << "Player " << name << "'s board looks like this:\n\n";
    visibleBoard.printBoard();
}

void Player::printHiddenBoard() {
    cout << "Player " + name + "'s UNCOVERED board looks like this (DEBUG ONLY):\n\n";
    hiddenBoard.printBoard();
}

char Player::registerAttackOnBoardAtGivenCoordinate(int coordinate) {
    int row = GameUtil::getRowFromCoordinate(coordinate);
    int col = GameUtil::getColFromCoordinate(coordinate);
    char actualStatus = hiddenBoard.getTileStatus(row, col);
    cout << "The status of tile " << coordinate << " of player " << name << " is " << actualStatus << "\n\n";
    visibleBoard.markTileWithStatus(row, col, actualStatus);
    return actualStatus;
}
