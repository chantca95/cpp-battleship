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
    GameUtil();
    void swapActivePlayer(Player* p1, Player* p2);
};
#endif /* GameUtil_hpp */
