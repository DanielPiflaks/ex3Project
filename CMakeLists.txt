cmake_minimum_required(VERSION 3.8)
project(ex3)

set(CMAKE_CXX_STANDARD 98)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lpthread")
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)

set(SOURCE_FILES src/Board.cpp src/Board.h src/Player.h src/HumanPlayer.h src/HumanPlayer.cpp src/Player.cpp src/Game.h src/Game.cpp src/GameParameters.cpp src/GameParameters.h src/BoardCoordinates.cpp src/BoardCoordinates.h src/GameLogic.cpp src/GameLogic.h src/StandartGameLogic.cpp src/StandartGameLogic.h  src/AIPlayer.h src/AIPlayer.cpp src/MiniMaxSimulatorTest.h src/MiniMaxSimulator.cpp src/MiniMaxSimulator.h)
set(TESTS_FILES tests/MiniMaxSimulatorTest.cpp tests/BoardTest.cpp)

add_executable(ex3 ${SOURCE_FILES} src/main.cpp)
add_executable(tests ${SOURCE_FILES} ${TESTS_FILES} tests/gtest_main.cpp)

target_link_libraries(tests gtest gtest_main pthread)
add_test(ex3 ex3)