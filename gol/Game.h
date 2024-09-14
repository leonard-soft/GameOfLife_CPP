#ifndef GAME_H
#define GAME_H

#include "../managers/ArgumentManager.h"

class Game {
private:
    int argc;
    char** argv;
public:
    Game(int argc, char** argv);
    void start();
};
#endif