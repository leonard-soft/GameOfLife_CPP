cmake_minimum_required(VERSION 3.29)
project(c__)

set(CMAKE_CXX_STANDARD 14)

include_directories(game)
include_directories(managers)

add_executable(c__
        game/Game.cpp
        game/Game.h
    managers/ArgumentManager.cpp
    managers/ArgumentManager.h
    GameOfLife.cpp
        configuration/GameConfiguration.cpp
        configuration/GameConfiguration.h
        validator/ArgumentValidator.cpp
        validator/ArgumentValidator.h
        validator/ValidArguments.cpp
        validator/ValidArguments.h)
