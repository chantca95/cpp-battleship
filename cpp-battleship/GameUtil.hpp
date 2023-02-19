//
//  GameUtil.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#ifndef GameUtil_hpp
#define GameUtil_hpp

#include <stdio.h>
#include <string>
#include "Player.hpp"
using namespace std;

// Signal Constants
const int SHIP_MISSED = -1;
const int SHIP_HIT = 0;
const int SHIP_DESTROYED = 1;
const int GAME_CONTINUE = 2;
const int GAME_END = 3;

// Game Constants
const int numShipsToPlace = 5;
const int numPlayers = 2;

class GameUtil {
public:
    inline static Player* current = nullptr;
    inline static Player* next = nullptr;
    static void swapActivePlayer();
    static void initializeShips();
    static int getRowFromCoordinate(int coordinate);
    static int getColFromCoordinate(int coordinate);
    static Player createPlayer(int playerNumber);
    static void playGame();
    static void printIntro();
    static void printOutro();
};
#endif /* GameUtil_hpp */
