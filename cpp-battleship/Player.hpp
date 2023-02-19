//
//  Player.hpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>
#include "Board.hpp"

using namespace std;

class Player {
public:
    Player(string name);
    string name;
    void printVisibleBoard();
    void printHiddenBoard();
    bool registerAttackOnBoardAtGivenCoordinate(int coordinate);
private:
    Board board;
};
#endif /* Player_hpp */
