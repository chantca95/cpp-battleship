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

void initializePlayerShips() {
    string input;
    cout << "It is Player " << GameUtil::current->name << "'s turn to place ships.\n\n";
    for (int j = 0; j < numShipsToPlace; j++) {
        cout << "Please select a tile from 1-100 to place a ship at: ";
        cin >> input;
        int coordinate = stoi(input);
        if (1 <= coordinate && coordinate <= 100) {
            Ship* s = new Horizontal3Ship();
            GameUtil::current->placeShipOnBoardAtCoordinate(s, coordinate);
        }
        cout << endl;
    }
    GameUtil::swapActivePlayer();
}

int commencePlayerTurn() {
    cout << "----- NEXT TURN -----\n\n";
    cout << "It is now " << GameUtil::current->name << "'s turn. ";
    while (true) {
        GameUtil::next->printVisibleBoard();
        cout << "Please select a tile from 1-100 to attack: ";
        string userInput;
        cin >> userInput;
        int coordinate = stoi(userInput);
        if (1 <= coordinate && coordinate <= 100) {
            cout << "Attacking square " << coordinate << "!\n";
            int attackResult = GameUtil::next->registerAttackOnBoardAtGivenCoordinate(coordinate);
            if (attackResult == SHIP_MISSED) {
                cout << "You missed! Turn over!\n\n";
                break;
            } else {
                if (GameUtil::next->hasNoShipsRemaining()) {
                    cout << "Player " << GameUtil::next->name << " has no ships remaining and has been defeated!\n\n";
                    cout << "PLAYER " << GameUtil::current->name << " WINS!!!\n\n";
                    return GAME_END;
                    break;
                } else {
                    cout << "Successful attack! You get to go again! ";
                }
            }
        }
    }
    return GAME_CONTINUE;
}

void GameUtil::swapActivePlayer() {
    Player temp = *current;
    *current = *next;
    *next = temp;
}

void GameUtil::initializeShips() {
    for (int i = 0; i < numPlayers; i++) {
        initializePlayerShips();
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

void GameUtil::playGame() {
    while (true) {
        if (commencePlayerTurn() == GAME_END) {
            break;
        }
        swapActivePlayer();
    }
}

void GameUtil::printIntro() {
    cout << "Welcome to Battleships! Each player will place 5 ship pieces on a 10 x 10 board.\n";
    cout << "Players then take turns attacking each other, one square at a time.\n";
    cout << "If you hit a ship, you get to attack again. If you miss, play rotates to the other player.\n";
    cout << "The game ends when either player destroys all of the others' ships. HAVE FUN! \n\n";
}

void GameUtil::printOutro() {
    // For debugging purposes only, remove when done
    cout << "----- GAME OVER ----- \n\n\n";
    current->printEndingBoard();
    next->printEndingBoard();
}
