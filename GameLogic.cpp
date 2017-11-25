/******************************************
Student name: Daniel Piflaks
Student ID: 311322986
Course Exercise Group: 05
Exercise name: Ex2
******************************************/

#include "GameLogic.h"

GameLogic::GameLogic(Board *board) :
        board(board) {
}

GameLogic::~GameLogic() {

}

Board &GameLogic::getBoard() {
    return *board;
}
