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

class GameUtil {
public:
    static void swapActivePlayer(Player* p1, Player* p2);
    static void attackPlayerAtCoordinate(Player* other, int coordinate);
    static int getRowFromCoordinate(int coordinate);
    static int getColFromCoordinate(int coordinate);
    static Player createPlayer(int playerNumber);
    static void commencePlayerTurn(Player* current, Player* next);
    static void printIntro();
};
#endif /* GameUtil_hpp */
