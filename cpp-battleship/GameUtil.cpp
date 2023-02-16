//
//  GameUtil.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "GameUtil.hpp"
#include <iostream>
#include <cstdlib>

GameUtil::GameUtil(){};

void GameUtil::swapActivePlayer(Player *p1, Player *p2) {
    cout << "----- NEXT TURN -----\n\n";
    Player temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
