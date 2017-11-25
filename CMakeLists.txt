cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)

set(SOURCE_FILES main.cpp Board.cpp Board.h Player.h HumanPlayer.h HumanPlayer.cpp Player.cpp Game.h Game.cpp GameParameters.cpp GameParameters.h BoardCoordinates.cpp BoardCoordinates.h GameLogic.cpp GameLogic.h StandartGameLogic.cpp StandartGameLogic.h)
add_executable(ex3 ${SOURCE_FILES})