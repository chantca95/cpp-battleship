//
//  main.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/14/23.
//

#include <iostream>
#include "Board.hpp"
#include "Player.hpp"
#include "GameUtil.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    GameUtil gameUtil = GameUtil();
    Player p1 = Player("Alice"), p2 = Player("Bob");
    Player *current = &p1;
    Player *next = &p2;
    (*current).printVisibleBoard();
    // alternative syntax of (*current) is current->methodName
    next->printVisibleBoard();
    gameUtil.swapActivePlayer(current, next);
    current->printHiddenBoard();
    next->printHiddenBoard();
    return 0;
}
