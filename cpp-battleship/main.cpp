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
    Player *current = &p1;
    Player *next = &p2;
    GameUtil::currentqwer = &p1;
    GameUtil::nextasdf = &p2;
    
    for (int i = 0; i < 2; i++) {
        GameUtil::initializePlayerShips();
        GameUtil::swapActivePlayer();
    }
    
    for (int i = 0; i < 10; i++) {
        GameUtil::commencePlayerTurn();
        GameUtil::swapActivePlayer();
    }
    
    // For debugging purposes only, remove when done
    cout << "\n\n\n ----- GAME OVER ----- \n\n\n";
    current->printVisibleBoard();
    current->printHiddenBoard();
    next->printVisibleBoard();
    next->printHiddenBoard();

    return 0;
}
