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

// Game Constants
const int numShipsToPlace = 5;

class GameUtil {
public:
    inline static Player* currentqwer = nullptr;
    inline static Player* nextasdf = nullptr;
    static void swapActivePlayer();
    static void initializePlayerShips();
    static int getRowFromCoordinate(int coordinate);
    static int getColFromCoordinate(int coordinate);
    static Player createPlayer(int playerNumber);
    static void commencePlayerTurn();
    static void printIntro();
};
#endif /* GameUtil_hpp */
