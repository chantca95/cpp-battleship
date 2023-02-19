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
    GameUtil::printIntro();
    Player p1 = GameUtil::createPlayer(1);
    Player p2 = GameUtil::createPlayer(2);
    GameUtil::current = &p1;
    GameUtil::next = &p2;
    GameUtil::initializeShips();
    GameUtil::playGame();
    // printOutro only gets called once a winner is declared
    GameUtil::printOutro();
    return 0;
}
