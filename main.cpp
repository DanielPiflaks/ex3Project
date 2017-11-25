/******************************************
Student name: Daniel Piflaks
Student ID: 311322986
Course Exercise Group: 05
Exercise name: Ex2
******************************************/
#include "GameParameters.h"
#include "Game.h"

int main() {
    //Create game parameters.
    GameParameters gameParameters(GameParameters::HumanPlayerOp, 'x',
                                  GameParameters::HumanPlayerOp, 'o', 8, 8);
    //Create game with those parameters.
    Game game(gameParameters);
    //Run single game.
    game.RunSingleGame();

    return 0;
}