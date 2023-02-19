//
//  GameUtil.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "GameUtil.hpp"
#include "Player.hpp"
#include "Ship.hpp"
#include "Horizontal3Ship.hpp"
#include <iostream>

void GameUtil::swapActivePlayer() {
    Player temp = *currentqwer;
    *currentqwer = *nextasdf;
    *nextasdf = temp;
}

void GameUtil::initializePlayerShips() {
    string input;
    cout << "It is Player " << currentqwer->name << "'s turn to place ships.\n\n";
    for (int i = 0; i < numShipsToPlace; i++) {
        cout << "Please select a tile from 1-100 to place a ship at: ";
        cin >> input;
        int coordinate = stoi(input);
        if (1 <= coordinate && coordinate <= 100) {
            Ship* s = new Horizontal3Ship();
            currentqwer->placeShipOnBoardAtCoordinate(s, coordinate);
        }
        cout << endl;
    }
}

int GameUtil::getRowFromCoordinate(int coordinate) {
    return (coordinate - 1) / 10;
}

int GameUtil::getColFromCoordinate(int coordinate) {
    return (coordinate - 1) % 10;
}

Player GameUtil::createPlayer(int playerNumber) {
    string name;
    cout << "Enter Player " << playerNumber << "'s name: ";
    getline(cin, name);
    cout << "\n";
    return Player(name);
}

void GameUtil::commencePlayerTurn() {
    cout << "----- NEXT TURN -----\n\n";
    cout << "It is now " << currentqwer->name << "'s turn. ";
    while (true) {
        nextasdf->printVisibleBoard();
        cout << "Please select a tile from 1-100 to attack: ";
        string userInput;
        cin >> userInput;
        int coordinate = stoi(userInput);
        if (1 <= coordinate && coordinate <= 100) {
            cout << "Attacking square " << coordinate << "!\n";
            int attackResult = nextasdf->registerAttackOnBoardAtGivenCoordinate(coordinate);
            if (attackResult == SHIP_MISSED) {
                cout << "You missed! Turn over!\n\n";
                break;
            } else {
                if (nextasdf->hasNoShipsRemaining()) {
                    cout << "Player " << nextasdf->name << " has no ships remaining and has been defeated!\n\n";
                    cout << "PLAYER " << currentqwer->name << " WINS!!!\n\n";
                    break;
                } else {
                    cout << "Successful attack! You get to go again! ";
                }
            }
        }
    }
}

void GameUtil::printIntro() {
    cout << "Welcome to Battleships! Each player will place 5 ship pieces on a 10 x 10 board.\n";
    cout << "Players then take turns attacking each other, one square at a time.\n";
    cout << "If you hit a ship, you get to attack again. If you miss, play rotates to the other player.\n";
    cout << "The game ends when either player destroys all of the others' ships. HAVE FUN! \n\n";
}
