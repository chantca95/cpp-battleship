//
//  Board.cpp
//  cpp-battleship
//
//  Created by Alex Chan on 2/15/23.
//

#include "Board.hpp"
#include <iostream>
using namespace std;

Board::Board() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = '?';
        }
    };
}

void Board::printBoard() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << grid[i][j] << ' ';
        }
        cout << '\n';
    };
    cout << '\n';
}

void Board::placeShipOnBoardAt(int row, int col) {
    grid[row][col] = 'X';
}

void Board::markRemainingSquaresSafe() {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (grid[i][j] != 'X') {
                grid[i][j] = '-';
            }
        }
    };
}
